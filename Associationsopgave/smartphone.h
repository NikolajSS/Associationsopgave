#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "screen.h"
#include "app.h"

#include <algorithm>
#include <iostream>
#include <list>

class SmartPhone
{
public:
    SmartPhone();//constructor
    SmartPhone(Screen screen1);//constructor
    void setScreen(Screen*);
    void setApps(std::list<App> apps);
    void addApp(App app);
    void removeApp(App app);
    void openApp(App app);
    void showAllApps();
private:
    std::list<App> _apps;
    Screen* _sc;
};

#endif // SMARTPHONE_H
