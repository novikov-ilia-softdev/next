#include "configmanager.h"
#include "configmanagerimpl.h"

ConfigManager::ConfigManager( IOutputManagerPtr outputManagerPtr)
{
	configManagerImplPtr_ = IConfigManagerImplPtr( new ConfigManagerImpl( outputManagerPtr));
}

ConfigManager::~ConfigManager()
{

}

int ConfigManager::getMaxIndex() const
{
	return configManagerImplPtr_->getMaxIndex();
}

void ConfigManager::saveUsedIndex( int index)
{
	configManagerImplPtr_->saveUsedIndex( index);
}

bool ConfigManager::isRangeFull() const
{
	return configManagerImplPtr_->isRangeFull();
}

bool ConfigManager::isUsedIndex( int index) const
{
	return configManagerImplPtr_->isUsedIndex( index);
}
