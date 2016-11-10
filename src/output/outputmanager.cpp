#include "outputmanager.h"

OutputManager::OutputManager()
{
	outputManagerImplPtr_ = OutputManagerImplPtr( new OutputManagerImpl());
}

OutputManager::~OutputManager()
{

}

void OutputManager::print( const std::string& msg) const
{
	outputManagerImplPtr_->print( msg);
}

void OutputManager::print( const std::string& msg, int i) const
{
	outputManagerImplPtr_->print( msg, i);
}
