#include <iostream>
#include "car.h"

using namespace std;

int main()
{

    Car myCar("Toyota","Yaris");
    myCar.setEngine();
    myCar.setWheel();
    myCar.PrintDetails();

    return 0;
}
