#pragma once
#include <string>
#include <map>
#include <vector>

using namespace std;
class BaseStreamControlEngine
{
private:
	int fillerLength;
	string processName;

protected:
	bool IsExternalFileExist(string url);
	string GetAWSMediaBucketURL(string fileName, string extension);
	map<string, string> PushUpComingStream(string input, int skipDuration);
	void PushHeadStream(map<string, string> upComingResult, int skipDuration);
	string StartLocalRecording(map<string, string> streamResult, string overlayCommand);
	bool CheckIfMediaExist(string id);

public:
	BaseStreamControlEngine();
	~BaseStreamControlEngine();
	virtual vector<string> NormalizeMediaList();
	virtual map<string, string> BuildStream();
};

