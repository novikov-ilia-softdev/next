#ifndef MAINMANAGERIMPL_H
#define MAINMANAGERIMPL_H

#include <boost/shared_ptr.hpp>

#include "../config/configmanager.h"
#include "../output/outputmanager.h"
#include "../random/randommanager.h"

class MainManagerImpl{
public:
	MainManagerImpl();
	~MainManagerImpl();
	void run();

private:
	OutputManagerPtr outputManagerPtr_;
	ConfigManagerPtr configManagerPtr_;
	RandomManagerPtr randomManagerPtr_;
};

typedef boost::shared_ptr< MainManagerImpl> MainManagerImplPtr;

#endif // MAINMANAGERIMPL_H
