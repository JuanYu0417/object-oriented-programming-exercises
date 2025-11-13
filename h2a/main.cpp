#include <windows.h>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    car objCar("Tesla","Y",2020);
    objCar.printData();

    Rectangle1* objRec = new  Rectangle1(8.30, 6.50);
    objRec->printAreaAndCircum();
    delete objRec;

    auto studentPtr = make_unique<Student>();
    studentPtr->setName("Mikko Heinonen");
    studentPtr->setStudentNumber(999);
    studentPtr->setAverage(4.8);

    cout<<"Students' Info:"<<endl;
    cout<<"Name:"<<studentPtr->getName()<<", studentNumber:"<<
        studentPtr->getStudentNumber()<<", average:"<<studentPtr->getAverage()<<endl;



    return 0;
}

