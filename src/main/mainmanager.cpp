#include "mainmanager.h"

MainManager::MainManager()
{
	mainManagerImplPtr_ = MainManagerImplPtr( new MainManagerImpl());
}

MainManager::~MainManager()
{

}

void MainManager::run()
{
	mainManagerImplPtr_->run();
}
