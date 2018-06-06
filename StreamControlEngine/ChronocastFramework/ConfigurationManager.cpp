#include "stdafx.h"
#include "ConfigurationManager.h"


void ConfigurationManager::LoadingConfigurationList()
{
	string key;
	string value;
	fstream fileStream(this->ConfigFileName);

	while (fileStream)
	{
		getline(fileStream, key, '=');
		getline(fileStream, value, '\n');

		this->ConfigurationList[key] = value;
	}

	fileStream.close();
}

void ConfigurationManager::ReadStreamConfigValues(int channelId)
{
	this->StreamConfigurationList["Ip"] = "127.0.0.1";
	this->StreamConfigurationList["ChunckServerIp"] = "127.0.0.1";
}

ConfigurationManager::ConfigurationManager()
{
}


ConfigurationManager::~ConfigurationManager()
{
}
