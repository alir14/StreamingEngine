#pragma once
#include <string>
#include <map>
#include <vector>

class BaseStreamControlEngine 
{
private:
	int fillerLength;
	std::string processName;

protected:
	bool IsExternalFileExist(std::string url);
	std::string GetAWSMediaBucketURL(std::string fileName, std::string extension);
	std::map<std::string, std::string> PushUpComingStream(std::string input, int skipDuration);
	void PushHeadStream(std::map<std::string, std::string> upComingResult, int skipDuration);
	std::string StartLocalRecording(std::map<std::string, std::string> streamResult, std::string overlayCommand);
	bool CheckIfMediaExist(std::string id);
public:
	BaseStreamControlEngine();
	~BaseStreamControlEngine();
	virtual std::vector<std::string> NormalizeMediaList();
	virtual std::map<std::string, std::string> BuildStream();
};

