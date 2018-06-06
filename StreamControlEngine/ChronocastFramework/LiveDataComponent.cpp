#include "stdafx.h"
#include "LiveDataComponent.h"


LiveDataComponent::LiveDataComponent()
{
}


LiveDataComponent::~LiveDataComponent()
{
}

void LiveDataComponent::CreateLiveStreamStatus(LiveStreamStatus liveStatus)
{
	liveStatus.id = 1;
	this->tempLiveStreamStatusCollection.push_back(liveStatus);
}
