#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(std::string n) {
    name = n;
    std::cout<<"Chef "<<name<<" konstruktori"<<endl;
}

void Chef::makeSalad(){
    std::cout<<"Chef "<<name<<" makes salad"<<std::endl;
}
void Chef::makeSoup(){
    std::cout<<"Chef "<<name<<" makes soup"<<std::endl;
}
Chef::~Chef(){
    std::cout<<"Chef "<<name<<" destruktori"<<endl;
}
