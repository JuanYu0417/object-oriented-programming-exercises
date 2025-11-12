#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double w, double h){
    this->width=w;
    this->height=h;
}
Rectangle::Rectangle(){}
double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

void  Rectangle::setWidth(double w){
    width=w;
}
void  Rectangle::setHeight(double h){
    height=h;
}

double  Rectangle::getArea(){
   return width * height;
}
double  Rectangle::getCircum(){
    return 2 * (width + height);
}

void Rectangle::printAreaAndCircum(){
    std::cout<<"Area="<<width * height<<", circum="<< 2 * (width + height)<<endl;
}
