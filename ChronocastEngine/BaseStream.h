#pragma once
#include <string>
#include <memory>
#include <map>
#include "MultimediaManager.h"

class BaseStream
{
private:
	std::map<std::string, std::string> configurationValue;

protected:
	std::unique_ptr<MultimediaManager> multiMediaManager;
	void LoadingConfigValue();
	void InitializeStreamData();
	void KillOldLocalFFMPEGProcesses();
	void ExecuteOnPlayoutServer(std::string script, std::string processReference, std::map<std::string, std::string> data);

public:
	BaseStream();
	~BaseStream();

};

