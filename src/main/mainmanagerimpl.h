#ifndef MAINMANAGERIMPL_H
#define MAINMANAGERIMPL_H

#include <boost/shared_ptr.hpp>

#include "../config/iconfigmanager.h"
#include "../output/outputmanager.h"
#include "../random/irandommanager.h"

class MainManagerImpl{
public:
	MainManagerImpl();
	~MainManagerImpl();
	void run();

private:
	OutputManagerPtr outputManagerPtr_;
	IConfigManagerPtr configManagerPtr_;
	IRandomManagerPtr randomManagerPtr_;
};

typedef boost::shared_ptr< MainManagerImpl> MainManagerImplPtr;

#endif // MAINMANAGERIMPL_H
