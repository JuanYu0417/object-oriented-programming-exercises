#include "rectangle.h"
#include <iostream>
//#include <windows.h>
using namespace std;

Rectangle1::Rectangle1(double w, double h){
    this->width=w;
    this->height=h;
}
Rectangle1::Rectangle1(){}
double Rectangle1::getWidth() const
{
    return width;
}

double Rectangle1::getHeight() const
{
    return height;
}

void  Rectangle1::setWidth(double w){
    width=w;
}
void  Rectangle1::setHeight(double h){
    height=h;
}

double  Rectangle1::getArea(){
   return width * height;
}
double  Rectangle1::getCircum(){
    return 2 * (width + height);
}

void Rectangle1::printAreaAndCircum(){
    //SetConsoleOutputCP(CP_UTF8);
    //SetConsoleCP(CP_UTF8);
    std::cout<<"pinta-ala="<<width * height<<", ympärysmitta="<< 2 * (width + height)<<endl;
}
