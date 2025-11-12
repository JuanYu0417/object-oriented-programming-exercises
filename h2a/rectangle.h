#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle(double w, double h);
    Rectangle();
    double getArea();
    double getCircum();
    void setWidth(double);
    void setHeight(double);
    double getWidth() const;
    double getHeight() const;
    void printAreaAndCircum();
};

#endif // RECTANGLE_H
