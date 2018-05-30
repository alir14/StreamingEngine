#include "stdafx.h"
#include "FFMPEGManager.h"


FFMPEGManager::FFMPEGManager()
{
}


FFMPEGManager::~FFMPEGManager()
{
}

string FFMPEGManager::GetLocalRecordingCommand(string input, string overlays, string output, int skipDuration)
{
	return string();
}

string FFMPEGManager::GetLocalRTMPCommand(string input, string applicationName, string streamName, int skipDuration)
{
	return string();
}

string FFMPEGManager::GetPushLiveCommand(string inputFileName, string liveStream, string rtmpPort)
{
	return string();
}

string FFMPEGManager::GetPushLiveFillerCommand(string fillerFile, string liveStream, string rtmpPort)
{
	return string();
}

string FFMPEGManager::PopulateOverlayCommand(vector<string> overlayMediaList)
{
	return string();
}
