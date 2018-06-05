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

ConfigurationManager::ConfigurationManager()
{
}


ConfigurationManager::~ConfigurationManager()
{
}
