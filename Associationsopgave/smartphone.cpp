#include "smartphone.h"

SmartPhone::SmartPhone()
{

}

void SmartPhone::setScreen(Screen* sc)
{
    _sc = sc;
}

void SmartPhone::setApps(std::list<App> apps)
{

}

void SmartPhone::addApp(App app)
{

}

void SmartPhone::removeApp(App app)
{

}

void SmartPhone::openApp(App app)
{

}

void SmartPhone::showAllApps()
{
    _sc->showApps(_apps);
}
