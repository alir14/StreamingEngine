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
	map<string, string> ConfigurationList;
	void LoadingConfigurationList();
	ConfigurationManager();
	~ConfigurationManager();
};

