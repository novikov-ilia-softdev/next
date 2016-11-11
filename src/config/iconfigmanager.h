#ifndef ICONFIGMANAGER_H
#define ICONFIGMANAGER_H

#include <boost/shared_ptr.hpp>

class IConfigManager{

public:
	IConfigManager() {};
	virtual ~IConfigManager() {};

	virtual bool isUsedIndex( int index) const = 0;
	virtual bool isRangeFull() const = 0;
	virtual int getMaxIndex() const = 0;
	virtual void saveUsedIndex( int index) = 0;
};

typedef boost::shared_ptr< IConfigManager> IConfigManagerPtr;

#endif // ICONFIGMANAGER_H
