#pragma once
#include <map>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
class ConfigurationManager
{
private:
	const string ConfigFileName = "Config.ini";
public:
	ConfigurationManager();
	~ConfigurationManager();
	map<string, string> ConfigurationList;
	map<string, string> StreamConfigurationList;
	void LoadingConfigurationList();
	void ReadStreamConfigValues(int channelId);

};

