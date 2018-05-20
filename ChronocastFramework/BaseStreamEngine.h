#pragma once
#ifdef BASESTREAMENGINE_EXPORTS
#define BASESTREAMENGINE_API __declspec(dllexport)
#else
#define BASESTREAMENGINE_API __declspec(dllimport)
#endif

#include <string>
#include <memory>
#include <map>
#include "FFMPEGManager.h"

class __declspec(dllexport) BaseStreamEngine
{
private:
	std::map<std::string, std::string> configurationValue;
	void ExecuteCommand(std::string script);
protected:
	std::unique_ptr<FFMPEGManager> multiMediaManager;
	void LoadingConfigValue();
	void InitializeStreamData();
	void KillOldLocalFFMPEGProcesses();
	void ExecuteOnServer(std::string script, std::string processReference, std::map<std::string, std::string> data);
	bool IsRecordedFileExist(std::string file);

public:
	BaseStreamEngine();
	~BaseStreamEngine();
	virtual void StartStream();
	virtual void ProcessStream();
	virtual void PushFillersIntoFile(std::string fileName, int fillersCount);
};

