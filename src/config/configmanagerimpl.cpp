#include "configmanagerimpl.h"

#include <boost/property_tree/json_parser.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/foreach.hpp>
#include <fstream>

const std::string ConfigManagerImpl::CONFIG_PATH = "./config.json";

ConfigManagerImpl::ConfigManagerImpl( IOutputManagerPtr outputManagerPtr) : outputManagerPtr_( outputManagerPtr)
{
	readConfig_();
}

ConfigManagerImpl::~ConfigManagerImpl()
{

}

void ConfigManagerImpl::readConfig_()
{
	std::ifstream jsonFile( CONFIG_PATH.c_str());
	boost::property_tree::ptree pt;
	read_json( jsonFile, pt);
	maxIndex_ = boost::lexical_cast<int>( pt.get_child( "maxIndex").data());
	BOOST_FOREACH( boost::property_tree::ptree::value_type &v, pt.get_child( "usedIndex"))
	{
		usedIndexes_.push_back( boost::lexical_cast<int>( v.second.data()));
	}
	jsonFile.close();
}

int ConfigManagerImpl::getMaxIndex() const
{
	return maxIndex_;
}

void ConfigManagerImpl::saveUsedIndex( int index)
{
	usedIndexes_.push_back( index);
	writeConfig_();
}

void ConfigManagerImpl::writeConfig_()
{

	std::ofstream jsonFile( CONFIG_PATH.c_str());
	boost::property_tree::ptree pt;
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
	jsonFile.close();
}

bool ConfigManagerImpl::isRangeFull() const
{
	return ( usedIndexes_.size() == maxIndex_);
}

bool ConfigManagerImpl::isUsedIndex( int index) const
{
	for( int i = 0; i < usedIndexes_.size(); i++)
	{
		if( index == usedIndexes_[ i])
			return true;
	}

	return false;
}
