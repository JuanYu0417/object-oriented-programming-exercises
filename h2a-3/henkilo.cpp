#include "henkilo.h"

henkilo::henkilo(int uusiIka,string uusiNimi) {
    ika=uusiIka;
    nimi=uusiNimi;
}

void henkilo::setIka(int uusiIka){
    ika=uusiIka;
}

void henkilo::setNimi(string uusiNimi){
    nimi=uusiNimi;
}

std::string henkilo::getNimi(string nimi){
    return nimi;
}

int henkilo::getIka(int ika){
    return ika;
}

void henkilo::tulostaTiedot(){
    cout<<nimi<<" on "<<ika<<" vuotias"<<endl;
}
