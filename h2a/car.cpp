#include <iostream>

using namespace std;

#include "car.h"

car::car(string brand,string model,int yearModel){
    this->brand=brand;
    this->model=model;
    this->yearModel=yearModel;
}

car::car() {}

void car::setBrand(string newBrand){
    brand=newBrand;
}
void car::setModel(string newModel){
    model=newModel;
}
void car::setYearModel(int newYearModel){
    yearModel=newYearModel;
}
string car::getBrand(){
    return brand;
}
string car::getModel(){
    return model;
}
int car::getYearModel(){
    return yearModel;
}
void car::printData(){
    cout<<"Brand= "<<brand<<", model= "<<model<<", yearModel= "<<yearModel<<endl;
}
