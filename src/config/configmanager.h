#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <boost/shared_ptr.hpp>

#include "../output/ioutputmanager.h"
#include "configmanagerimpl.h"
#include "iconfigmanager.h"

class ConfigManager: public IConfigManager{

public:
	ConfigManager( IOutputManagerPtr outputManagerPtr);
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
