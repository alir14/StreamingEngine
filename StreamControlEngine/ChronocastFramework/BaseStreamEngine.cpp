#include "stdafx.h"
#include "BaseStreamEngine.h"


void BaseStreamEngine::ExecuteCommand(string script)
{
}

void BaseStreamEngine::LoadingConfigValue()
{
	this->configurationManagerInstance.LoadingConfigurationList();

	if (!this->configurationManagerInstance.ConfigurationList.empty())
	{
		if (!this->configurationManagerInstance.ConfigurationList["Channel"].empty())
		{
			this->channelID = stoi(this->configurationManagerInstance.ConfigurationList["Channel"]);

			this->configurationManagerInstance.ReadStreamConfigValues(this->channelID);
		}
	}
}

void BaseStreamEngine::InitializeStreamData()
{
	LiveStreamStatus liveStatusObject;
	LiveDataComponent liveDC;
	liveStatusObject.channelId = this->channelID;

	liveDC.CreateLiveStreamStatus(liveStatusObject);
	
}

void BaseStreamEngine::KillOldLocalFFMPEGProcesses()
{
}

void BaseStreamEngine::ExecuteOnServer(string script, string processReference, map<string, string> data)
{
}

bool BaseStreamEngine::IsRecordedFileExist(string file)
{
	return false;
}

BaseStreamEngine::BaseStreamEngine()
{
	this->LoadingConfigValue();
	this->InitializeStreamData();
}


BaseStreamEngine::~BaseStreamEngine()
{
}

void BaseStreamEngine::StartStream()
{
}

void BaseStreamEngine::ProcessStream()
{
}

void BaseStreamEngine::PushFillersIntoFile(std::string fileName, int fillersCount)
{
}
