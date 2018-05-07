#pragma once
#include <string>
#include <memory>
#include "Schedule.h"
#include "Server.h"
#include "Media.h"

class BaseStreamManager
{
public:
	BaseStreamManager();
	~BaseStreamManager();

protected:
	void loadingConfigValue();
	void initializeStreamData();
	void killOldLocalFFMPEGProcesses();
	void executeOnPlayoutServer(std::string script, std::string processReference, void *data);
	void logStreamProcess(std::string  key, std::string message, void *meta);
	bool isExternalFileExists(std::string url);
	void executeCMD(std::string script);
	std::string getAWSMediaBucketURL(std::string file, std::string extension);
	void pushFillersIntoFile(std::string fileName, int fillersCount);
	void pushExternalMediaFillersIntoFile(std::string fileName, int duration);
	void updateStreamSwitchBox(std::string name, std::string scheduleId);
	void *pushUpComing(std::string input, int skipDuration);
	void pushHead(void *pushUpComingResult, int skipDuration);
	void recordStreamProcessStatus(std::string serviceName, std::string processId);
	void initializeStreamSwitchBox();
	void *getCurrentItemForScheduleProcess(void *currentRunningItem);
	void *getCurrentItemForFallbaclProcess();
	void *getCurrentItemForLiveProcess(void *currentRunningItem);
	void recordCurrentRunningService(std::string input);
	void runServcie(std::string serviceName, std::string serviceCommand);
	bool isRecordedFileExist(std::string file);
	std::string getTranscodedId(void *media);

private:
	int getNumberofRunningProcesses(std::string item);
	void recordPreviousRunningItem();
	void getNextMediaItem(int index, std::shared_ptr<Schedule> schedule);
	std::shared_ptr<Schedule> getNextSchedule(std::string scheduleEndTime);
	bool isMediaAnAssetType(std::shared_ptr<Media> media);
	std::shared_ptr<Server> getServer();
	void removeProcessFromProcessesList(std::shared_ptr<Server> server, std::string removeBy, std::string value);
	void initializeStreamServerData();
	void initializeLiveStreamStatusData();
	void insertStreamSwitchBox(std::string name, bool status, std::string scheduleId);
	void logInDB(std::string key, std::string message, std::string meta);
};

