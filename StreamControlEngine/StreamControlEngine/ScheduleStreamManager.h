#pragma once
#include <string>
#include <vector>
#include <map>
#include "BaseStreamEngine.h"
#include "BaseStreamControlEngine.h"

using namespace std;
class ScheduleStreamManager: public BaseStreamEngine, public BaseStreamControlEngine
{
public:
	ScheduleStreamManager();
	~ScheduleStreamManager();
	void StartStream();
	void ProcessStream();
	vector<string> NormalizeMediaList();
	map<string, string> BuildStream();
};

