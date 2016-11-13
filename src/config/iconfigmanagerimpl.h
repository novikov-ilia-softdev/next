#ifndef ICONFIGMANAGERIMPL_H
#define ICONFIGMANAGERIMPL_H

#include <boost/shared_ptr.hpp>

class IConfigManagerImpl{
public:
	IConfigManagerImpl() {};
	virtual ~IConfigManagerImpl() {};

	virtual bool isUsedIndex( int index) const = 0;
	virtual bool isRangeFull() const = 0;
	virtual int getMaxIndex() const = 0;
	virtual void saveUsedIndex( int index) = 0;
};

typedef boost::shared_ptr< IConfigManagerImpl> IConfigManagerImplPtr;

#endif // ICONFIGMANAGERIMPL_H
