#include "app.h"

App::App()
{

}

string App::getName() const
{
    return name;
}

void App::setName(const string &value)
{
    name = value;
}

float App::getSize() const
{
    return size;
}

void App::setSize(float value)
{
    size = value;
}

string App::getDescription() const
{
    return description;
}

void App::setDescription(const string &value)
{
    description = value;
}
