#include "screen.h"

Screen::Screen(string type)
{
    type_ = type;
}

void Screen::showApps(std::list<App*> apps)
{
    std::cout << "On the " << type_ << " screen - Showing apps: " << endl;
    for(App* app : apps){
        std::cout << "App with name " << app->getName() << endl;
        std::cout << "App with size " << app->getSize() << "MB" << endl;
        std::cout << "App with description " << app->getDescription() << endl << endl;
    }
}
