#pragma once
#include <memory>
#include "Schedule.h"
#include "Fallback.h"
#include "BaseStream.h"

class StreamSwitchBoxManager: public BaseStream
{
private:
	std::unique_ptr<Schedule> currentSchedule;
	std::unique_ptr<Fallback> currentFallback;
	std::string liveStreamStatus;
	std::string switchBoxStreamStatus;
	void InitializeStreamSwitchBox();
	bool IsReadyToExecuteNewSchedule();
	bool CheckIfScheduleProcessFinish();
	bool CheckIfFallbackProcessFinish();
	bool CheckforTakeover();
	void ProcessStream();
	void ProcessLiveStream();
	void ProcessFallbackStream();
	void ProcessScheduleStream();
	void GetNextScheduleItem();

public:
	StreamSwitchBoxManager();
	~StreamSwitchBoxManager();
	void StartProcess();

};

