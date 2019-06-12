#include "smartphone.h"

SmartPhone::SmartPhone()
{

}

SmartPhone::SmartPhone(Screen screen1)
{

}

void SmartPhone::setScreen(Screen* sc)
{
    _sc = sc;
}

void SmartPhone::setApps(std::list<App> apps)
{

}

void SmartPhone::addApp(App *app)
{
    _apps.push_back(app);
}



void SmartPhone::removeApp(App* app)
{
    _apps.remove(app);
}

void SmartPhone::openApp(App app)
{

}

void SmartPhone::showAllApps()
{
    _sc->showApps(_apps);
}

void SmartPhone::test()
{
    cout << "hej!" << endl;
}
