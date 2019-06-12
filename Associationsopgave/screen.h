#ifndef SCREEN_H
#define SCREEN_H
#include <algorithm>
#include <iostream>
#include <list>
#include "app.h"


class Screen
{
public:
    Screen(string type);

    void showApps(std::list<App*> apps);
private:
    string type_;
};

#endif // SCREEN_H
