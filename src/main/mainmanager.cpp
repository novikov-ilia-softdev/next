#include "mainmanager.h"
#include "mainmanagerimpl.h"

MainManager::MainManager()
{
	mainManagerImplPtr_ = IMainManagerImplPtr( new MainManagerImpl());
}

MainManager::~MainManager()
{

}

void MainManager::run()
{
	mainManagerImplPtr_->run();
}
