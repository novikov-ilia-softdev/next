#include "configmanager.h"

#include <boost/property_tree/json_parser.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/foreach.hpp>
#include <fstream>
#include <iostream>

const std::string ConfigManager::CONFIG_PATH = "./config.json";

ConfigManager::ConfigManager( OutputManagerPtr outputManagerPtr) : outputManagerPtr_( outputManagerPtr)
{
	readConfig_();
}

ConfigManager::~ConfigManager()
{

}

void ConfigManager::readConfig_()
{
	std::ifstream jsonFile( CONFIG_PATH.c_str());
	boost::property_tree::ptree pt;
	read_json( jsonFile, pt);
	minIndex_ = boost::lexical_cast<int>( pt.get_child( "minIndex").data());
	maxIndex_ = boost::lexical_cast<int>( pt.get_child( "maxIndex").data());
	BOOST_FOREACH( boost::property_tree::ptree::value_type &v, pt.get_child( "usedIndex"))
	{
		usedIndexes_.push_back( boost::lexical_cast<int>( v.second.data()));
	}
	jsonFile.close();
}

const std::vector<int> & ConfigManager::getUsedIndexes() const
{
	return usedIndexes_;
}

int ConfigManager::getMinIndex() const
{
	return minIndex_;
}

int ConfigManager::getMaxIndex() const
{
	return maxIndex_;
}

void ConfigManager::saveUsedIndex( int index)
{
	usedIndexes_.push_back( index);
	writeConfig_();
}

void ConfigManager::writeConfig_()
{

	std::ofstream jsonFile( CONFIG_PATH.c_str());
	boost::property_tree::ptree pt;
	pt.put( "minIndex", minIndex_);
	pt.put( "maxIndex", maxIndex_);
	boost::property_tree::ptree usedIndexNodes;
	for( int i = 0; i < usedIndexes_.size(); i++)
	{
		boost::property_tree::ptree usedIndexNode;
		usedIndexNode.put( "", usedIndexes_[ i]);
		usedIndexNodes.push_back(std::make_pair("", usedIndexNode));
	}

	pt.add_child( "usedIndex", usedIndexNodes);
	write_json( jsonFile, pt);
	//write_json( std::cout, pt);
	jsonFile.close();
}
