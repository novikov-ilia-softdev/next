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

int RandomManager::getRandom( int minIndex, int maxIndex, const std::vector<int>& usedIndexes)
{
	int randIndex = -1;

	if( maxIndex <= usedIndexes.size())
		return randIndex;

	while( 1)
	{
		randIndex = ((rand() % maxIndex) + 1);
		if( isRandIndexUsed_( randIndex, usedIndexes))
			continue;

		break;
	}

	return randIndex;
}

bool RandomManager::isRandIndexUsed_( int randIndex, const std::vector<int>& usedIndexes)
{
	for( int i = 0; i < usedIndexes.size(); i++)
	{
		if( randIndex == usedIndexes[ i])
		{
			return true;
		}
	}

	return false;
}
