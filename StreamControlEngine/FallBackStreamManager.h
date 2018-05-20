#pragma once
#include <vector>
#include <map>

class FallBackStreamManager
{
public:
	FallBackStreamManager();
	~FallBackStreamManager();
	void StartStream();
	void ProcessStream();
	std::vector<std::string> NormalizeMediaList();
	std::map<std::string, std::string> BuildStream();
};

