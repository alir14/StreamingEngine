#pragma once
#include <string>

class Schedule
{
private:
	int Id;
	std::string fileName;
	int start;
	int end;
	int duration;
	long scheduleDate;
public:
	Schedule();
	~Schedule();
	int getId();
	std::string getFileName();
	int getStart();
	int getEnd();
	int getDuration();
	long getScheduleDate();

	void setId(int id);
	void setFileName(std::string fileName);
	void setStart(int start);
	void setEnd(int end);
	void setDuration(int duration);
	void setScheduleDate(long date);
};

