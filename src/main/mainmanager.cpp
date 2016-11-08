#include "mainmanager.h"
#include <iostream>
#include <vector>

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
	std::vector<int> usedIndexes = configManagerPtr_->getUsedIndexes();
	int minIndex = configManagerPtr_->getMinIndex();
	int maxIndex = configManagerPtr_->getMaxIndex();
	int randomIndex = randomManagerPtr_->getRandom( minIndex, maxIndex, usedIndexes);
	std::cout << "randomIndex: " << randomIndex << std::endl;
	if( randomIndex != -1)
		configManagerPtr_->saveUsedIndex( randomIndex);
}
