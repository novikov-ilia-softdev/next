#ifndef OUTPUTMANAGER_H
#define OUTPUTMANAGER_H

#include <boost/shared_ptr.hpp>
#include <string>
#include "ioutputmanager.h"
#include "ioutputmanagerimpl.h"

class OutputManager: public IOutputManager{
public:
	OutputManager();
	~OutputManager();

	void print( const std::string& msg) const;
	void print( const std::string& msg, int i) const;

private:
	IOutputManagerImplPtr outputManagerImplPtr_;
};

typedef boost::shared_ptr< OutputManager> OutputManagerPtr;

#endif // OUTPUTMANAGER_H
