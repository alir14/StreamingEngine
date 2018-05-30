#pragma once
#include <string>
#include <memory>
#include <map>
#include "FFMPEGManager.h"

using namespace std;
class BaseStreamEngine
{
private:
	void ExecuteCommand(string script);
protected:
	map<string, string> configurationValue;
	unique_ptr<FFMPEGManager> multiMediaManager;
	void LoadingConfigValue();
	void InitializeStreamData();
	void KillOldLocalFFMPEGProcesses();
	void ExecuteOnServer(string script, string processReference, map<string, string> data);
	bool IsRecordedFileExist(string file);


public:
	BaseStreamEngine();
	~BaseStreamEngine();
	virtual void StartStream();
	virtual void ProcessStream();
	virtual void PushFillersIntoFile(std::string fileName, int fillersCount);
};

