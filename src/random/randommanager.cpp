#include "randommanager.h"
#include <cstdlib>
#include <iostream>

RandomManager::RandomManager( OutputManagerPtr outputManagerPtr)
{
	randomManagerImplPtr_ = RandomManagerImplPtr( new RandomManagerImpl( outputManagerPtr));
}

RandomManager::~RandomManager()
{

}

int RandomManager::getRandom( int maxIndex) const
{
	return randomManagerImplPtr_->getRandom( maxIndex);
}
