#include "stdafx.h"
#include "BaseStreamEngine.h"


void BaseStreamEngine::ExecuteCommand(string script)
{
}

void BaseStreamEngine::LoadingConfigValue()
{
	this->configurationManagerInstance.LoadingConfigurationList();

	if (!this->configurationManagerInstance.ConfigurationList.empty())
	{
		if (!this->configurationManagerInstance.ConfigurationList["Channel"].empty())
		{

			this->channelID = stoi(this->configurationManagerInstance.ConfigurationList["Channel"]);
		}
	}

	/*if (!this->configurationValue.empty())
	{
		this->configurationValue = Map{};

		$config = Config::getInstance(__DIR__.'/../../../nutsNBolts/config/');

		$this->configurationValue->add(Pair{ 'channelId', $config->get('stream.channelId') });

		$channel = ChannelModel::findOne(Map{ 'id' = > $config->get('stream.channelId') });

		if (!is_null($channel))
		{
			$channelId = $channel->get('id');

			$configs = ConfigurationModel::find(Map{ 'channelId' = > $channelId });

			foreach($configs as $config)
			{
				$this->configurationValue->add(Pair{ $config->get('configKey'), $config->get('configValue') });
			}
		}
	}*/
}

void BaseStreamEngine::InitializeStreamData()
{
}

void BaseStreamEngine::KillOldLocalFFMPEGProcesses()
{
}

void BaseStreamEngine::ExecuteOnServer(string script, string processReference, map<string, string> data)
{
}

bool BaseStreamEngine::IsRecordedFileExist(string file)
{
	return false;
}

BaseStreamEngine::BaseStreamEngine()
{
}


BaseStreamEngine::~BaseStreamEngine()
{
}

void BaseStreamEngine::StartStream()
{
}

void BaseStreamEngine::ProcessStream()
{
}

void BaseStreamEngine::PushFillersIntoFile(std::string fileName, int fillersCount)
{
}
