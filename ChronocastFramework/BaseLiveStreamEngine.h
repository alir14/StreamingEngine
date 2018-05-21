#pragma once

class __declspec(dllexport) BaseLiveStreamEngine
{
public:
	BaseLiveStreamEngine();
	~BaseLiveStreamEngine();
	virtual void PushLiveStream();
};

