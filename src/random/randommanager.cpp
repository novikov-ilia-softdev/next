#include "randommanager.h"
#include <cstdlib>

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

	if( maxIndex - minIndex == usedIndexes.size())
		return randIndex;

	while( 1)
	{
		randIndex = (rand() % (maxIndex + 1));
		for( int i = 0; i < usedIndexes.size(); i++)
		{
			if( randIndex == usedIndexes[ i])
				continue;
		}
		break;
	}

	return randIndex;
}
