#pragma once

#include <Windows.h>	/* For INI parsing Windows API functions: GetPrivateProfileString & GetPrivateProfileInt */
#include <vector>

class FileObserver
{
	private:
		class ObservableFile* file;
	public:
		void refreshIni();

		FileObserver(ObservableFile* file);
		~FileObserver();
};

class ObservableFile
{
	private:
		std::vector<FileObserver *> observerList;

	public:
		ObservableFile() {};
		~ObservableFile() {};

		void attachObserver(FileObserver *);

		void detachObserver(FileObserver *);

		void notifyObservers(void);

		bool isFileChanged(void);
};

class KeyValuePair
{
	public:
		KeyValuePair() {};
		~KeyValuePair() {};

		std::string key;
		std::string value; //TODO: template class with specific types
};

class IniFileSection
{
	IniFileSection() {};
	~IniFileSection() {};
	
	std::string sectionLabel;
	std::vector<KeyValuePair> keyValueData;
};

class IniFile : public ObservableFile
{
	std::vector<IniFileSection> section;
};


