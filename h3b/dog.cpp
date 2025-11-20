#include "dog.h"
#include <iostream>

using namespace std;

Dog::Dog() {}

void Dog::CallOut(){
    cout<<"Koira haukkuu!"<<endl;
}


Dog::~Dog(){
    cout<<"Olio Dog oli tuhoudutiin."<<endl;
}
