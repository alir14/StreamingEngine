#pragma once
#include "LiveStreamStatus.h"
#include "BaseDataComponent.h"
#include <map>
#include <string>
#include <vector>

using namespace std;
class LiveDataComponent: public BaseDataComponent
{
private:
	vector<LiveStreamStatus> tempLiveStreamStatusCollection;
public:
	LiveDataComponent();
	~LiveDataComponent();
	void CreateLiveStreamStatus(LiveStreamStatus liveStatus);

};

