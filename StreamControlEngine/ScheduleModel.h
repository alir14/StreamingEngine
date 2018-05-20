#pragma once
#include <string>
class ScheduleModel
{
private:
	int Id;
	std::string fileName;
	int start;
	int end;
	int duration;
	long scheduleDate;
public:
	ScheduleModel();
	~ScheduleModel();
};

