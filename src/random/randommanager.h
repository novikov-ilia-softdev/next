#ifndef RANDOMMANAGER_H
#define RANDOMMANAGER_H

#include <boost/shared_ptr.hpp>

#include "../output/outputmanager.h"

class RandomManager{
public:
	RandomManager( OutputManagerPtr outputManagerPtr);
	~RandomManager();

private:
	OutputManagerPtr outputManagerPtr_;
};

typedef boost::shared_ptr< RandomManager> RandomManagerPtr;

#endif // RANDOMMANAGER_H
