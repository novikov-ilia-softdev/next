#include "randommanager.h"
#include <cstdlib>
#include <iostream>

RandomManager::RandomManager( OutputManagerPtr outputManagerPtr): outputManagerPtr_( outputManagerPtr)
{
	srand( time(NULL));
}

RandomManager::~RandomManager()
{

}

int RandomManager::getRandom( int maxIndex) const
{
	return ((rand() % maxIndex) + 1);
}
