#include <iostream>
#include "app.h"
#include "button.h"
#include "screen.h"
#include "smartphone.h"

int main()
{
    SmartPhone sp;
    Screen* screen = new Screen;
    sp.setScreen(screen);
    return 0;
}
