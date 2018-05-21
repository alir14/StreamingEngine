#pragma once
#ifdef SERVERMODEL_EXPORTS
#define SERVERMODEL_API __declspec(dllexport)
#else
#define SERVERMODEL_API __declspec(dllimport)
#endif

#include <string>
#include <vector>

class ServerModel
{

public:
	ServerModel();
	~ServerModel();
	int Id;
	std::string fileName;
	std::string serverName;
	std::string host;
	std::string port;
	std::vector<std::string> processesList;
	int channelId;
};

