#ifndef IOUTPUTMANAGERIMPL_H
#define IOUTPUTMANAGERIMPL_H

#include <boost/shared_ptr.hpp>
#include <string>

class IOutputManagerImpl{
public:
	IOutputManagerImpl() {};
	virtual ~IOutputManagerImpl() {};

	virtual void print( const std::string& msg) const = 0;
	virtual void print( const std::string& msg, int i) const = 0;
};

typedef boost::shared_ptr< IOutputManagerImpl> IOutputManagerImplPtr;

#endif // IOUTPUTMANAGERIMPL_H
