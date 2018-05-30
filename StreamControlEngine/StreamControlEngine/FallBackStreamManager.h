#pragma once
#include <string>
#include <vector>
#include <map>
#include "BaseStreamEngine.h"
#include "BaseStreamControlEngine.h"

using namespace std;
class FallBackStreamManager: public BaseStreamEngine, public BaseStreamControlEngine
{
public:
	FallBackStreamManager();
	~FallBackStreamManager();
	void StartStream();
	void ProcessStream();
	vector<string> NormalizeMediaList();
	map<string, string> BuildStream();
};

