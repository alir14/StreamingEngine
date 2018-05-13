#pragma once
#include "BaseStream.h"
#include <string>

class NotifyStreamManager
{
public:
	NotifyStreamManager();
	~NotifyStreamManager();
	void ReceiveStreamStatusNotification(std::string app, std::string name, std::string status);
};

