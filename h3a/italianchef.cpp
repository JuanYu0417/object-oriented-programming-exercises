#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string n):Chef(n){
    this->getName();
    std::cout<<"Italian Chef "<<name<<" konstruktori"<<endl;
}

void ItalianChef:: makePasta(){

    std::cout<<"Italian Chef "<<name<<" makes pasta"<<std::endl;
}

std::string ItalianChef::getName() const{
    return name;
}

void ItalianChef::setName(const std::string &newName){
    name=newName;
}
ItalianChef::~ItalianChef(){
    std::cout<<"Name of the Italian Chef is  "<<name<<endl;
    std::cout<<"Italian Chef "<<name<<" destruktori"<<endl;
}
