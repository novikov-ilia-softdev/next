#ifndef MAINMANAGER_H
#define MAINMANAGER_H

#include <boost/shared_ptr.hpp>

#include "imainmanagerimpl.h"
#include "imainmanager.h"

class MainManager: public IMainManager{
public:
	MainManager();
	~MainManager();
	void run();

private:
	IMainManagerImplPtr mainManagerImplPtr_;
};

typedef boost::shared_ptr< MainManager> MainManagerPtr;

#endif // MAINMANAGER_H
