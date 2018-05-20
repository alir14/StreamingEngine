#include "stdafx.h"
#include "BaseStreamEngine.h"


void BaseStreamEngine::ExecuteCommand(std::string script)
{
}

void BaseStreamEngine::LoadingConfigValue()
{
}

void BaseStreamEngine::InitializeStreamData()
{
}

void BaseStreamEngine::KillOldLocalFFMPEGProcesses()
{
}

void BaseStreamEngine::ExecuteOnServer(std::string script, std::string processReference, std::map<std::string, std::string> data)
{
}

bool BaseStreamEngine::IsRecordedFileExist(std::string file)
{
	return false;
}

BaseStreamEngine::BaseStreamEngine()
{
	this->multiMediaManager = std::make_unique<FFMPEGManager>();

}


BaseStreamEngine::~BaseStreamEngine()
{
	this->multiMediaManager.release();
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
