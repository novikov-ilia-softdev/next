#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <boost/shared_ptr.hpp>

#include "../output/outputmanager.h"
#include "configmanagerimpl.h"

class ConfigManager{

public:
	ConfigManager( OutputManagerPtr outputManagerPtr);
	~ConfigManager();

	bool isUsedIndex( int index) const;
	bool isRangeFull() const;
	int getMaxIndex() const;
	void saveUsedIndex( int index);

private:
	ConfigManagerImplPtr configManagerImplPtr_;
};

typedef boost::shared_ptr< ConfigManager> ConfigManagerPtr;

#endif // CONFIGMANAGER_H
