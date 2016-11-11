#ifndef MAINMANAGER_H
#define MAINMANAGER_H

#include <boost/shared_ptr.hpp>

#include "mainmanagerimpl.h"

class MainManager{
public:
	MainManager();
	~MainManager();
	void run();

private:
	MainManagerImplPtr mainManagerImplPtr_;
};

typedef boost::shared_ptr< MainManager> MainManagerPtr;

#endif // MAINMANAGER_H
