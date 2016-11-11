#include "mainmanagerimpl.h"
#include "../output/outputmanager.h"
#include "../config/configmanager.h"
#include "../random/randommanager.h"

MainManagerImpl::MainManagerImpl(): outputManagerPtr_( IOutputManagerPtr( new OutputManager))
{
	configManagerPtr_ = IConfigManagerPtr( new ConfigManager( outputManagerPtr_));
	randomManagerPtr_ = IRandomManagerPtr( new RandomManager( outputManagerPtr_));
}

MainManagerImpl::~MainManagerImpl()
{

}

void MainManagerImpl::run()
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
