#ifndef MAINMANAGERIMPL_H
#define MAINMANAGERIMPL_H

#include <boost/shared_ptr.hpp>

#include "../config/iconfigmanager.h"
#include "../output/ioutputmanager.h"
#include "../random/irandommanager.h"
#include "imainmanagerimpl.h"

class MainManagerImpl: public IMainManagerImpl{
public:
	MainManagerImpl();
	~MainManagerImpl();
	void run();

private:
	IOutputManagerPtr outputManagerPtr_;
	IConfigManagerPtr configManagerPtr_;
	IRandomManagerPtr randomManagerPtr_;
};

typedef boost::shared_ptr< MainManagerImpl> MainManagerImplPtr;

#endif // MAINMANAGERIMPL_H
