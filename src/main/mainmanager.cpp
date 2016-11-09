#include "mainmanager.h"

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
	if( configManagerPtr_->isRangeFull())
	{
		outputManagerPtr_->print( "range is full!");
		return;
	}

	int maxIndex = configManagerPtr_->getMaxIndex();
	int randomIndex;

	while( 1)
	{
		randomIndex = randomManagerPtr_->getRandom( maxIndex);
		if( configManagerPtr_->isUsedIndex( randomIndex))
			continue;

		break;
	}

	outputManagerPtr_->print( "randomIndex: ", randomIndex);
	configManagerPtr_->saveUsedIndex( randomIndex);
}
