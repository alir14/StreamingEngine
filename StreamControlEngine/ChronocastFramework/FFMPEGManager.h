#pragma once
#include <string>
#include <vector>

using namespace std;
class FFMPEGManager
{
public:
	FFMPEGManager();
	~FFMPEGManager();
	string GetLocalRecordingCommand(string input, string overlays, string output, int skipDuration);
	string GetLocalRTMPCommand(string input, string applicationName, string streamName, int skipDuration);
	string GetPushLiveCommand(string inputFileName, string liveStream, string rtmpPort);
	string GetPushLiveFillerCommand(string fillerFile, string liveStream, string rtmpPort);
	string PopulateOverlayCommand(vector<string> overlayMediaList);
};

