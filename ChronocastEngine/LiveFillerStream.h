#pragma once
#include "BaseStream.h"
#include "BaseLiveStream.h"

class LiveFillerStream:public BaseStream, public BaseLiveStream
{
public:
	LiveFillerStream();
	~LiveFillerStream();
	void StartStream();
	void ProcessStream();
	void PushLiveStream();
};

