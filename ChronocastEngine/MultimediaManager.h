#pragma once
#include <string>
#include <vector>

class MultimediaManager
{
public:
	MultimediaManager();
	~MultimediaManager();
	std::string GetLocalRecordingCommand(std::string input, std::string overlays, std::string output, int skipDuration);
	std::string GetLocalRTMPCommand(std::string input, std::string applicationName, std::string streamName, int skipDuration);
	std::string GetPushLiveCommand(std::string inputFileName, std::string liveStream, std::string rtmpPort);
	std::string GetPushLiveFillerCommand(std::string fillerFile, std::string liveStream, std::string rtmpPort);
	std::string PopulateOverlayCommand(std::vector<std::string> overlayMediaList);

};

