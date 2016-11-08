#include "outputmanager.h"

#include <iostream>

OutputManager::OutputManager()
{

}

OutputManager::~OutputManager()
{

}

void OutputManager::print( const std::string& msg) const
{
	std::cout << msg << std::endl;
}

void OutputManager::print( const std::string& msg, int i) const
{
	std::cout << msg << i << std::endl;
}
