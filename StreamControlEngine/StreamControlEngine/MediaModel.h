#pragma once
#include <string>

using namespace std;
class MediaModel
{
public:
	MediaModel();
	~MediaModel();
	int Id;
	string fileName;
	int start;
	int end;
	int duration;
	long scheduleDate;
};

