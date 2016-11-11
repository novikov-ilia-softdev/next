#ifndef IRANDOMMANAGER_H
#define IRANDOMMANAGER_H

#include <boost/shared_ptr.hpp>

#include "./randommanagerimpl.h"

class IRandomManager{
public:
	IRandomManager() {};
	virtual ~IRandomManager() {};

	virtual int getRandom( int maxIndex) const = 0;
};

typedef boost::shared_ptr< IRandomManager> IRandomManagerPtr;

#endif // IRANDOMMANAGER_H
