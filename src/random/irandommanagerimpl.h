#ifndef IRANDOMMANAGERIMPL_H
#define IRANDOMMANAGERIMPL_H

#include <boost/shared_ptr.hpp>

class IRandomManagerImpl{
public:
	IRandomManagerImpl() {};
	virtual ~IRandomManagerImpl() {};

	virtual int getRandom( int maxIndex) const = 0;
};

typedef boost::shared_ptr< IRandomManagerImpl> IRandomManagerImplPtr;

#endif // IRANDOMMANAGERIMPL_H
