#pragma once
#include <string>
#include <memory>
#include <map>
#include "MultimediaManager.h"

class BaseStream
{
private:
	std::map<std::string, std::string> configurationValue;
	void ExecuteCommand(std::string script);
protected:
	std::unique_ptr<MultimediaManager> multiMediaManager;
	void LoadingConfigValue();
	void InitializeStreamData();
	void KillOldLocalFFMPEGProcesses();
	void ExecuteOnServer(std::string script, std::string processReference, std::map<std::string, std::string> data);
	bool IsRecordedFileExist(std::string file);

public:
	BaseStream();
	~BaseStream();
	virtual void StartStream();
	virtual void ProcessStream();
	virtual void pushFillersIntoFile(std::string fileName, int fillersCount);

};

