#pragma once
#include "BaseStream.h"
#include "BaseLiveStream.h"

class LiveStream: public BaseLiveStream, public BaseStream
{
public:
	LiveStream();
	~LiveStream();
	void StartStream();
	void ProcessStream();
	void PushLiveStream();
};

