#include "screen.h"

Screen::Screen()
{

}

void Screen::showApps(std::list<App> apps)
{
    std::cout << "Showing apps: " << endl;
    for(App app : apps){
        std::cout << "App with name " << app.getName() << endl;
    }
}
