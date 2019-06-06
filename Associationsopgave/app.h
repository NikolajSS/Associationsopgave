#ifndef APP_H
#define APP_H
#include <string>
#include <iostream>
using namespace std;

class App
{
public:
    App();
    string getName() const;
    void setName(const string &value);

    float getSize() const;
    void setSize(float value);

    string getDescription() const;
    void setDescription(const string &value);

private:
    string name;
    float size;
    string description;
};

#endif // APP_H
