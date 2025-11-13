#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle1
{
private:
    double width;
    double height;
public:
    Rectangle1(double w, double h);
    Rectangle1();
    double getArea();
    double getCircum();
    void setWidth(double);
    void setHeight(double);
    double getWidth() const;
    double getHeight() const;
    void printAreaAndCircum();
};

#endif // RECTANGLE_H
