#pragma once
#include "BaseStream.h"
#include "PreRecordStream.h"

class FallBackStream: public BaseStream, public PreRecordStream
{
public:
	FallBackStream();
	~FallBackStream();
	void StartStream();
	void ProcessStream();
	std::vector<std::string> NormalizeMediaList();
	std::map<std::string, std::string> BuildStream();
};

