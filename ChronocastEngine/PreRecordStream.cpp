#include "stdafx.h"
#include "PreRecordStream.h"


PreRecordStream::PreRecordStream()
{
}


PreRecordStream::~PreRecordStream()
{
}

bool PreRecordStream::IsExternalFileExist(std::string url)
{
	return false;
}

std::string PreRecordStream::GetAWSMediaBucketURL(std::string fileName, std::string extension)
{
	return std::string();
}

std::map<std::string, std::string> PreRecordStream::PushUpComingStream(std::string input, int skipDuration)
{
	return std::map<std::string, std::string>();
}

void PreRecordStream::PushHeadStream(std::map<std::string, std::string> upComingResult, int skipDuration)
{
}

std::vector<std::string> PreRecordStream::NormalizeMediaList()
{
	return std::vector<std::string>();
}

std::map<std::string, std::string> PreRecordStream::BuildStream()
{
	return std::map<std::string, std::string>();
}

std::string PreRecordStream::StartLocalRecording(std::map<std::string, std::string> streamResult, std::string overlayCommand)
{
	return std::string();
}

bool PreRecordStream::CheckIfMediaExist(std::string id)
{
	return false;
}
