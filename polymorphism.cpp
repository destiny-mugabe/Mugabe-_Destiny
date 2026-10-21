
#include <iostream>
#include <string>
using namespace std;

class Laptop
{
public:
    virtual void showPurpose()
    {
        cout << "Laptop is used for general tasks." << endl;
    }
};

class GamingLaptop : public Laptop
{
public:
    void showPurpose() override
    {
        cout << "Gaming laptop is used for gaming." << endl;
    }
};

class BusinessLaptop : public Laptop
{
public:
    void showPurpose() override
    {
        cout << "Business laptop is used for office work." << endl;
    }
};

int main()
{
    GamingLaptop gaming;
    BusinessLaptop business;

    Laptop* laptop;

    laptop = &gaming;
    laptop->showPurpose();

    laptop = &business;
    laptop->showPurpose();

    return 0;
}
