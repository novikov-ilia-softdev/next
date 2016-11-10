#ifndef RANDOMMANAGERIMPL_H
#define RANDOMMANAGERIMPL_H

#include <boost/shared_ptr.hpp>

#include "../output/outputmanager.h"

class RandomManagerImpl{
public:
	RandomManagerImpl( OutputManagerPtr outputManagerPtr);
	~RandomManagerImpl();

	int getRandom( int maxIndex) const;

private:
	OutputManagerPtr outputManagerPtr_;
};

typedef boost::shared_ptr< RandomManagerImpl> RandomManagerImplPtr;

#endif // RANDOMMANAGERIMPL_H
