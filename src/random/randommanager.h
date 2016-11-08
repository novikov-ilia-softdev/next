#ifndef RANDOMMANAGER_H
#define RANDOMMANAGER_H

#include <boost/shared_ptr.hpp>
#include <vector>

#include "../output/outputmanager.h"

class RandomManager{
public:
	RandomManager( OutputManagerPtr outputManagerPtr);
	~RandomManager();

	int getRandom( int minIndex, int maxIndex, const std::vector<int>& usedIndexes);

private:
	OutputManagerPtr outputManagerPtr_;
	bool isRandIndexUsed_( int randIndex, const std::vector<int>& usedIndexes);
};

typedef boost::shared_ptr< RandomManager> RandomManagerPtr;

#endif // RANDOMMANAGER_H
