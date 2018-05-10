#pragma once
#include <string>
#include <map>
#include "BaseStream.h"
#include "PreRecordStream.h"

class ScheduleStream : public BaseStream, public PreRecordStream
{
private:
	int externalFillerLength;
	int ffmpegSkipDuration;
	void PushExternalMediaFillerIntoFile(std::string fileName, int duration);
	bool IsOldScheduleProcessAvailableToContinue();
	std::map<std::string, std::string> ShrinkSchedule(std::map<std::string, std::string> layer, int scheduleSelectTime);
	
public:
	ScheduleStream();
	~ScheduleStream();
	void StartStream();
	void ProcessStream();
	std::vector<std::string> NormalizeMediaList();
	std::map<std::string, std::string> BuildStream();
};

