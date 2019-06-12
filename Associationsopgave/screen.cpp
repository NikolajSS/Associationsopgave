#include "screen.h"
#include <windows.h>

Screen::Screen(string type)
{
    type_ = type;
}

void Screen::showApps(std::list<App*> apps)
{
/*    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 1;
    SetConsoleTextAttribute(hConsole, k);*/
    std::cout << "On the " << type_ << " screen - Showing apps: " << endl;
    for(App* app : apps){
        if(app->getName() == "Facebook")
        std::cout << "App with name " << app->getName() << endl;
        std::cout << "App with size " << app->getSize() << "MB" << endl;
        std::cout << "App with description " << app->getDescription() << endl << endl;
    }
}
