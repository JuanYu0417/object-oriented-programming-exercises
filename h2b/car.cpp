#include "car.h"
#include <iostream>

Car::Car(string b, string m, int y){
    brand=b;
    model=m;
    yearModel=y;
}

Car::Car() {}

void Car::printData() const {
    std::cout<<"Brand:"<<brand<<", Model:"<<model<<", yearModel:"<<yearModel<<std::endl;
}
