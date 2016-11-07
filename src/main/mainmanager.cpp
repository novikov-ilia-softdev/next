#include "mainmanager.h"
#include <iostream>

MainManager::MainManager(): outputManagerPtr_( OutputManagerPtr( new OutputManager))
{
	configManagerPtr_ = ConfigManagerPtr( new ConfigManager( outputManagerPtr_));
	randomManagerPtr_ = RandomManagerPtr( new RandomManager( outputManagerPtr_));
}

MainManager::~MainManager()
{

}

void MainManager::run()
{
	/*
	_configManager.getUsedIndex();
	_configManager.getMinIndex();
	_configManager.getMaxIndex();
	_randomManager.getRandom();
	_configManager.saveUsedIndex();
	*/
}
