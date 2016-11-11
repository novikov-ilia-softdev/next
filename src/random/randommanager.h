#ifndef RANDOMMANAGER_H
#define RANDOMMANAGER_H

#include <boost/shared_ptr.hpp>

#include "../output/outputmanager.h"
#include "./randommanagerimpl.h"
#include "irandommanager.h"

class RandomManager: public IRandomManager{
public:
	RandomManager( OutputManagerPtr outputManagerPtr);
	~RandomManager();

	int getRandom( int maxIndex) const;

private:
	RandomManagerImplPtr randomManagerImplPtr_;
};

typedef boost::shared_ptr< RandomManager> RandomManagerPtr;

#endif // RANDOMMANAGER_H
