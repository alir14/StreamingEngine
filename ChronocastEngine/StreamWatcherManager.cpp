#include "stdafx.h"
#include "StreamWatcherManager.h"


void StreamWatcherManager::ProcessChunksSyncronization(std::string name, std::string path, std::string quality)
{
}

std::string StreamWatcherManager::GetChunkName(std::string name, std::map<std::string, std::string> currentItem)
{
	return std::string();
}

std::map<std::string, std::string> StreamWatcherManager::GetCurrentRunningScheduleItem()
{
	return std::map<std::string, std::string>();
}

void StreamWatcherManager::ChunksSyncronizationProcess(std::string name, std::string path, std::string quality)
{
}

std::map<std::string, std::string> StreamWatcherManager::GetLastUpdatedChunkDetails(std::string channel, std::string quality, std::string chunksDirectory)
{
	return std::map<std::string, std::string>();
}

bool StreamWatcherManager::ValidateGetLastUpdatedChunkDetails(std::string output)
{
	return false;
}

StreamWatcherManager::StreamWatcherManager()
{
}


StreamWatcherManager::~StreamWatcherManager()
{
}

void StreamWatcherManager::StartStream()
{
}
