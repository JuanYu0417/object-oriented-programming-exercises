#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>
#include <string>

using namespace std;

class henkilo
{
private:
    int ika;
    string nimi;
public:
    henkilo(int uusiIka,string uusiNimi);
    void setIka(int uusiIka);
    void setNimi(string uusiNimi);
    int getIka(int ika);
    string getNimi(string nimi);
    void tulostaTiedot();
};


#endif // HENKILO_H
