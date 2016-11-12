#include "randommanager.h"

RandomManager::RandomManager( IOutputManagerPtr outputManagerPtr)
{
	randomManagerImplPtr_ = IRandomManagerImplPtr( new RandomManagerImpl( outputManagerPtr));
}

RandomManager::~RandomManager()
{

}

int RandomManager::getRandom( int maxIndex) const
{
	return randomManagerImplPtr_->getRandom( maxIndex);
}
