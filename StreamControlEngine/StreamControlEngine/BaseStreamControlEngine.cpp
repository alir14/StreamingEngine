#include "stdafx.h"
#include "BaseStreamControlEngine.h"


bool BaseStreamControlEngine::IsExternalFileExist(string url)
{
	return false;
}

string BaseStreamControlEngine::GetAWSMediaBucketURL(string fileName, string extension)
{
	return string();
}

map<string, string> BaseStreamControlEngine::PushUpComingStream(string input, int skipDuration)
{
	return map<string, string>();
}

void BaseStreamControlEngine::PushHeadStream(map<string, string> upComingResult, int skipDuration)
{
}

string BaseStreamControlEngine::StartLocalRecording(map<string, string> streamResult, string overlayCommand)
{
	return string();
}

bool BaseStreamControlEngine::CheckIfMediaExist(string id)
{
	return false;
}

BaseStreamControlEngine::BaseStreamControlEngine()
{
}


BaseStreamControlEngine::~BaseStreamControlEngine()
{
}

vector<string> BaseStreamControlEngine::NormalizeMediaList()
{
	return vector<string>();
}

map<string, string> BaseStreamControlEngine::BuildStream()
{
	return map<string, string>();
}
