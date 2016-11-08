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
};

typedef boost::shared_ptr< RandomManager> RandomManagerPtr;

#endif // RANDOMMANAGER_H
