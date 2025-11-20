#include <windows.h>
#include "animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {}


void Animal::CallOut(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Eläin ääntelee."<<endl;
}
 Animal::~ Animal(){
    cout<<"Olio Animal oli tuhoudutiin."<<endl;
}
