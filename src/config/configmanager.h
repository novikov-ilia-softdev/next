#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <boost/shared_ptr.hpp>
#include <vector>

#include "../output/outputmanager.h"

class ConfigManager{
public:
	ConfigManager( OutputManagerPtr outputManagerPtr);
	~ConfigManager();

private:
	OutputManagerPtr outputManagerPtr_;
	static const std::string CONFIG_PATH;
	void readConfig_();
	int minIndex_;
	int maxIndex_;
	std::vector<int> usedIndexes_;
};

typedef boost::shared_ptr< ConfigManager> ConfigManagerPtr;

#endif // CONFIGMANAGER_H
