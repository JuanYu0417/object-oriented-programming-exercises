#ifndef DOG_H
#define DOG_H
#include "animal.h"

class Dog:public Animal
{
public:
    Dog();
    void CallOut()override;
    ~Dog()override;
};

#endif // DOG_H
