#include "stdafx.h"
#include "FFMPEGManager.h"


FFMPEGManager::FFMPEGManager()
{
}


FFMPEGManager::~FFMPEGManager()
{
}

std::string FFMPEGManager::GetLocalRecordingCommand(std::string input, std::string overlays, std::string output, int skipDuration)
{
	return std::string();
}

std::string FFMPEGManager::GetLocalRTMPCommand(std::string input, std::string applicationName, std::string streamName, int skipDuration)
{
	return std::string();
}

std::string FFMPEGManager::GetPushLiveCommand(std::string inputFileName, std::string liveStream, std::string rtmpPort)
{
	return std::string();
}

std::string FFMPEGManager::GetPushLiveFillerCommand(std::string fillerFile, std::string liveStream, std::string rtmpPort)
{
	return std::string();
}

std::string FFMPEGManager::PopulateOverlayCommand(std::vector<std::string> overlayMediaList)
{
	return std::string();
}
