#pragma once

#ifdef FFMPEGMANAGER_EXPORT
#define FFMPEGMANAGER_API __declspec(dllexport)
#else
#define FFMPEGMANAGER_API __declspec(dllimport)
#endif 


#include <string>
#include <vector>
class __declspec(dllexport) FFMPEGManager
{
public:
	FFMPEGManager();
	~FFMPEGManager();
	std::string GetLocalRecordingCommand(std::string input, std::string overlays, std::string output, int skipDuration);
	std::string GetLocalRTMPCommand(std::string input, std::string applicationName, std::string streamName, int skipDuration);
	std::string GetPushLiveCommand(std::string inputFileName, std::string liveStream, std::string rtmpPort);
	std::string GetPushLiveFillerCommand(std::string fillerFile, std::string liveStream, std::string rtmpPort);
	std::string PopulateOverlayCommand(std::vector<std::string> overlayMediaList);
};

