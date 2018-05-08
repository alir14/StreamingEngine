#include "stdafx.h"
#include "BaseStream.h"
#include "MultimediaManager.h"

BaseStream::BaseStream()
{
	multiMediaManager = std::make_unique<MultimediaManager>();
}


BaseStream::~BaseStream()
{
}

void BaseStream::LoadingConfigValue()
{
}

void BaseStream::InitializeStreamData()
{
}

void BaseStream::KillOldLocalFFMPEGProcesses()
{
}

void BaseStream::ExecuteOnPlayoutServer(std::string script, std::string processReference, std::map<std::string, std::string> data)
{
}

