#ifndef SCREEN_H
#define SCREEN_H
#include <algorithm>
#include <iostream>
#include <list>
#include "app.h"


class Screen
{
public:
    Screen();
    void showApps(std::list<App> apps);
};

#endif // SCREEN_H
