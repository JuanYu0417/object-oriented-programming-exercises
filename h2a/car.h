#ifndef CAR_H
#define CAR_H

#include<string>
using namespace std;

class car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    car(string brand,string model,int yearModel);
    car();
    void setBrand(string newBrand);
    void setModel(string newModel);
    void setYearModel(int NewYearModel);
    string getBrand();
    string getModel();
    int getYearModel();
    void printData();
};

#endif // CAR_H
