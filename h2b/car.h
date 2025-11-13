#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;


class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(string, string, int);
    Car();
    void printData() const;
};

#endif // CAR_H
