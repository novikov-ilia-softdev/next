#ifndef IMAINMANAGER_H
#define IMAINMANAGER_H

#include <boost/shared_ptr.hpp>

class IMainManager{
public:
	IMainManager() {};
	virtual ~IMainManager() {};
	virtual void run() = 0;
};

typedef boost::shared_ptr< IMainManager> IMainManagerPtr;

#endif // IMAINMANAGER_H
