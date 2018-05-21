#pragma once
#include <string>
#include <memory>
#include <map>
#include "FFMPEGManager.h"

class BaseStreamEngine
{
private:
	void ExecuteCommand(std::string script);
protected:
	std::map<std::string, std::string> configurationValue;
	std::unique_ptr<FFMPEGManager> multiMediaManager;
	__declspec(dllexport) void LoadingConfigValue();
	__declspec(dllexport) void InitializeStreamData();
	__declspec(dllexport) void KillOldLocalFFMPEGProcesses();
	__declspec(dllexport) void ExecuteOnServer(std::string script, std::string processReference, std::map<std::string, std::string> data);
	__declspec(dllexport) bool IsRecordedFileExist(std::string file);

public:
	__declspec(dllexport) BaseStreamEngine();
	__declspec(dllexport) ~BaseStreamEngine();
	__declspec(dllexport) virtual void StartStream();
	__declspec(dllexport) virtual void ProcessStream();
	__declspec(dllexport) virtual void PushFillersIntoFile(std::string fileName, int fillersCount);
};

