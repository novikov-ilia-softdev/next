#ifndef MAINMANAGER_H
#define MAINMANAGER_H

#include <boost/shared_ptr.hpp>

#include "../config/configmanager.h"
#include "../output/outputmanager.h"
#include "../random/randommanager.h"

class MainManager{
public:
	MainManager();
	~MainManager();
	void run();

private:
	OutputManagerPtr outputManagerPtr_;
	ConfigManagerPtr configManagerPtr_;
	RandomManagerPtr randomManagerPtr_;
};

typedef boost::shared_ptr< MainManager> MainManagerPtr;

#endif // MAINMANAGER_H
