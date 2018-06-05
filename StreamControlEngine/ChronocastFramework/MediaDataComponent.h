#pragma once
#include "BaseDataComponent.h"
#include <string>
#include <map>

class MediaDataComponent :
	public BaseDataComponent
{

public:
	map<string, string> GetStreamConfiguraton();
	MediaDataComponent();
	~MediaDataComponent();
};

