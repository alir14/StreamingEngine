#include "stdafx.h"
#include "BaseStreamControlEngine.h"


bool BaseStreamControlEngine::IsExternalFileExist(std::string url)
{
	return false;
}

std::string BaseStreamControlEngine::GetAWSMediaBucketURL(std::string fileName, std::string extension)
{
	return std::string();
}

std::map<std::string, std::string> BaseStreamControlEngine::PushUpComingStream(std::string input, int skipDuration)
{
	return std::map<std::string, std::string>();
}

void BaseStreamControlEngine::PushHeadStream(std::map<std::string, std::string> upComingResult, int skipDuration)
{
}

std::string BaseStreamControlEngine::StartLocalRecording(std::map<std::string, std::string> streamResult, std::string overlayCommand)
{
	return std::string();
}

bool BaseStreamControlEngine::CheckIfMediaExist(std::string id)
{
	return false;
}

BaseStreamControlEngine::BaseStreamControlEngine()
{
}


BaseStreamControlEngine::~BaseStreamControlEngine()
{
}

std::vector<std::string> BaseStreamControlEngine::NormalizeMediaList()
{
	return std::vector<std::string>();
}

std::map<std::string, std::string> BaseStreamControlEngine::BuildStream()
{
	return std::map<std::string, std::string>();
}
