#include "./src/main/imainmanager.h"
#include "./src/main/mainmanager.h"

// g++ main.cpp src/config/configmanager.cpp src/main/mainmanager.cpp src/output/outputmanager.cpp src/random/randommanager.cpp src/random/randommanagerimpl.cpp src/output/outputmanagerimpl.cpp src/config/configmanagerimpl.cpp src/main/mainmanagerimpl.cpp

int main()
{
	IMainManagerPtr mainManagerPtr = IMainManagerPtr( new MainManager());
	mainManagerPtr->run();
}
