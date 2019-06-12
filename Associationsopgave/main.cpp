#include <iostream>
#include "app.h"
#include "button.h"
#include "screen.h"
#include "smartphone.h"

int main()
{
    SmartPhone sp;
    Screen* screen = new Screen("Retina");
    sp.setScreen(screen);

    App* MycookingApp = new App;
    MycookingApp->setName("Carolines mad");
    MycookingApp->setSize(12000);
    MycookingApp->setDescription("This app helps cooking food");
    sp.addApp(MycookingApp);

    App* Grinder = new App;
    Grinder->setName("GrinderHD");
    Grinder->setSize(100);
    Grinder->setDescription("This app is for gay people");
    sp.addApp(Grinder);

    App* Facebook = new App;
    Facebook->setName("Facebook");
    Facebook->setSize(15000);
    Facebook->setDescription("An app with a book with a face");
    sp.addApp(Facebook);

    App* Snapchat = new App;
    Snapchat->setName("Snapchat");
    Snapchat->setSize(13000);
    Snapchat->setDescription("Take pictures");
    sp.addApp(Snapchat);

    sp.showAllApps();

    sp.removeApp(Facebook);

    sp.showAllApps();
    return 0;
}
