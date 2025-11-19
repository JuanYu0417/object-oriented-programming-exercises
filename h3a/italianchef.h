#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>

using namespace std;


class ItalianChef:public Chef
{
public:
    ItalianChef(string n);
    void makePasta();
    std::string getName() const;
    void setName(const std::string &newName);
    ~ItalianChef();
};

#endif // ITALIANCHEF_H
