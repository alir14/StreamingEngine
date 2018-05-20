#pragma once
#ifdef BASELIVESTREAMENGINE_EXPORTS
#define BASELIVESTREAMENGINE_API __declspec(dllexport)
#else
#define BASELIVESTREAMENGINE_API __declspec(dllimport)
#endif

class BaseLiveStreamEngine
{
public:
	BaseLiveStreamEngine();
	~BaseLiveStreamEngine();
	virtual void PushLiveStream();
};

