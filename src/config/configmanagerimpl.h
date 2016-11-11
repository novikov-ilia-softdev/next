#ifndef CONFIGMANAGERIMPL_H
#define CONFIGMANAGERIMPL_H

#include <boost/shared_ptr.hpp>
#include <vector>

#include "../output/ioutputmanager.h"

class ConfigManagerImpl{
	static const std::string CONFIG_PATH;

public:
	ConfigManagerImpl( IOutputManagerPtr outputManagerPtr);
	~ConfigManagerImpl();

	bool isUsedIndex( int index) const;
	bool isRangeFull() const;
	int getMaxIndex() const;
	void saveUsedIndex( int index);

private:
	IOutputManagerPtr outputManagerPtr_;
	int maxIndex_;
	std::vector<int> usedIndexes_;

	void readConfig_();
	void writeConfig_();
};

typedef boost::shared_ptr< ConfigManagerImpl> ConfigManagerImplPtr;

#endif // CONFIGMANAGERIMPL_H
