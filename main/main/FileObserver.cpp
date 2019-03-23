#include "stdafx.h"
#include "FileObserver.h"


void FileObserver::refreshIni()
{
}

FileObserver::FileObserver(ObservableFile * file)
{
}

FileObserver::~FileObserver()
{
}

void ObservableFile::attachObserver(FileObserver *)
{
}

void ObservableFile::detachObserver(FileObserver *)
{
}

void ObservableFile::notifyObservers(void)
{
}

bool ObservableFile::isFileChanged(void)
{
	return false;
}
