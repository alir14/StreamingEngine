#include "stdafx.h"
#include "BaseStreamManager.h"


BaseStreamManager::BaseStreamManager()
{
}


BaseStreamManager::~BaseStreamManager()
{
}

void BaseStreamManager::loadingConfigValue()
{
}

void BaseStreamManager::initializeStreamData()
{
}

void BaseStreamManager::killOldLocalFFMPEGProcesses()
{
}

void BaseStreamManager::executeOnPlayoutServer(std::string script, std::string processReference, void * data)
{
}

void BaseStreamManager::logStreamProcess(std::string key, std::string message, void * meta)
{
}

bool BaseStreamManager::isExternalFileExists(std::string url)
{
	return false;
}

void BaseStreamManager::executeCMD(std::string script)
{
}

std::string BaseStreamManager::getAWSMediaBucketURL(std::string file, std::string extension)
{
	return std::string();
}

void BaseStreamManager::pushFillersIntoFile(std::string fileName, int fillersCount)
{
}

void BaseStreamManager::pushExternalMediaFillersIntoFile(std::string fileName, int duration)
{
}

void BaseStreamManager::updateStreamSwitchBox(std::string name, std::string scheduleId)
{
}

void *BaseStreamManager::pushUpComing(std::string input, int skipDuration)
{
	return nullptr;

}

void BaseStreamManager::pushHead(void * pushUpComingResult, int skipDuration)
{
}

void BaseStreamManager::recordStreamProcessStatus(std::string serviceName, std::string processId)
{
}

void BaseStreamManager::initializeStreamSwitchBox()
{
}

void * BaseStreamManager::getCurrentItemForScheduleProcess(void *currentRunningItem)
{
	return nullptr;
}

void * BaseStreamManager::getCurrentItemForFallbaclProcess()
{
	return nullptr;
}

void * BaseStreamManager::getCurrentItemForLiveProcess(void * currentRunningItem)
{
	return nullptr;
}

void BaseStreamManager::recordCurrentRunningService(std::string input)
{
}

void BaseStreamManager::runServcie(std::string serviceName, std::string serviceCommand)
{
}

bool BaseStreamManager::isRecordedFileExist(std::string file)
{
	return false;
}

std::string BaseStreamManager::getTranscodedId(void * media)
{
	return std::string();
}

int BaseStreamManager::
getNumberofRunningProcesses(std::string item)
{
	return 0;
}

void BaseStreamManager::recordPreviousRunningItem()
{
}

void BaseStreamManager::getNextMediaItem(int index, std::shared_ptr<Schedule> schedule)
{
}

std::shared_ptr<Schedule> BaseStreamManager::getNextSchedule(std::string scheduleEndTime)
{
	return std::shared_ptr<Schedule>();
}

bool BaseStreamManager::isMediaAnAssetType(std::shared_ptr<Media> media)
{
	return false;
}

std::shared_ptr<Server> BaseStreamManager::getServer()
{
	return std::shared_ptr<Server>();
}

void BaseStreamManager::removeProcessFromProcessesList(std::shared_ptr<Server> server, std::string removeBy, std::string value)
{
}

void BaseStreamManager::initializeStreamServerData()
{
}

void BaseStreamManager::initializeLiveStreamStatusData()
{
}

void BaseStreamManager::insertStreamSwitchBox(std::string name, bool status, std::string scheduleId)
{
}

void BaseStreamManager::logInDB(std::string key, std::string message, std::string meta)
{
}
