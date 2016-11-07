#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <boost/shared_ptr.hpp>

#include "../output/outputmanager.h"

class ConfigManager{
public:
	ConfigManager( OutputManagerPtr outputManagerPtr);
	~ConfigManager();

private:
	OutputManagerPtr outputManagerPtr_;
};

typedef boost::shared_ptr< ConfigManager> ConfigManagerPtr;

#endif // CONFIGMANAGER_H
