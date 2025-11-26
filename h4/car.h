#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

public:
    Car();
    Car(string,string);
    void setEngine();
    void setWheel();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    void PrintDetails();
};

#endif // CAR_H
