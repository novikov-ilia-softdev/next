#include "outputmanagerimpl.h"

#include <iostream>

OutputManagerImpl::OutputManagerImpl()
{

}

OutputManagerImpl::~OutputManagerImpl()
{

}

void OutputManagerImpl::print( const std::string& msg) const
{
	std::cout << msg << std::endl;
}

void OutputManagerImpl::print( const std::string& msg, int i) const
{
	std::cout << msg << i << std::endl;
}
