#include<iostream>
using namespace std;

class Car
{
private:
    void fuelCheck()
    {
        cout << "Fuel checking..." << endl;
    }

    void batteryCheck()
    {
        cout << "Battery checking..." << endl;
    }

    void engineCheck()
    {
        cout << "Engine checking..." << endl;
    }

public:
    void performMaintenance()
    {
        fuelCheck();
        batteryCheck();
        engineCheck();
    }
};

int main()
{
    Car myCar;
    myCar.performMaintenance();

    return 0;
}
 