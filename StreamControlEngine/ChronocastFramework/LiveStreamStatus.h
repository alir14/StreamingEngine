#pragma once
#include <string>

using namespace std;
class LiveStreamStatus
{
public:
	LiveStreamStatus();
	~LiveStreamStatus();
	int id;
	string applicationName;
	string streamName;
	bool publishing;
	bool recording;
	int updateTime;
	string recordingCommand;
	bool isLiveRequest;
	string liveType;
	string liveTitle;
	string liveDescription;
	string liveAnnotation;
	string channelId;
};

