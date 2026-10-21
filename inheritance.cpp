
#include <iostream>
#include <string>
using namespace std;

class Laptop
{
protected:
    string brand;
    double price;

public:
    Laptop(string b, double p)
        : brand(b), price(p)
    {
    }

    void showLaptopDetails()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

class GamingLaptop : public Laptop
{
protected:
    string gpu;

public:
    GamingLaptop(string b, double p, string g)
        : Laptop(b, p), gpu(g)
    {
    }

    void showGamingDetails()
    {
        cout << "GPU: " << gpu << endl;
    }
};

class HighEndGamingLaptop : public GamingLaptop
{
private:
    int ram;

public:
    HighEndGamingLaptop(string b, double p, string g, int r)
        : GamingLaptop(b, p, g), ram(r)
    {
    }

    void showHighEndDetails()
    {
        showLaptopDetails();
        showGamingDetails();
        cout << "RAM: " << ram << " GB" << endl;
    }
};

int main()
{
    HighEndGamingLaptop laptop("ASUS ROG", 2500000, "RTX 4060", 32);

    laptop.showHighEndDetails();

    return 0;
}

