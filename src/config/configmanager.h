#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <boost/shared_ptr.hpp>
#include <vector>

#include "../output/outputmanager.h"

class ConfigManager{
	static const std::string CONFIG_PATH;

public:
	ConfigManager( OutputManagerPtr outputManagerPtr);
	~ConfigManager();

	bool isUsedIndex( int index) const;
	bool isRangeFull() const;
	int getMaxIndex() const;
	void saveUsedIndex( int index);

private:
	OutputManagerPtr outputManagerPtr_;
	int maxIndex_;
	std::vector<int> usedIndexes_;

	void readConfig_();
	void writeConfig_();
};

typedef boost::shared_ptr< ConfigManager> ConfigManagerPtr;

#endif // CONFIGMANAGER_H
