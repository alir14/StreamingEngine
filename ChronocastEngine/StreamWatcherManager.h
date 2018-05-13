#pragma once
#include "BaseStream.h"
#include <string>
#include <map>

class StreamWatcherManager:public BaseStream
{
private:
	void ProcessChunksSyncronization(std::string name, std::string path, std::string quality);
	std::string GetChunkName(std::string name, std::map<std::string, std::string> currentItem);
	std::map<std::string, std::string> GetCurrentRunningScheduleItem();
	void ChunksSyncronizationProcess(std::string name, std::string path, std::string quality);
	std::map<std::string, std::string> GetLastUpdatedChunkDetails(std::string channel, std::string quality, std::string chunksDirectory);
	bool ValidateGetLastUpdatedChunkDetails(std::string output);

public:
	StreamWatcherManager();
	~StreamWatcherManager();
	void StartStream();

};

