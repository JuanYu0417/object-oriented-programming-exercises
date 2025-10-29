#include <iostream>
#include <stdexcept>

using namespace std;


void calcSum(int a, int b){
    cout << "Summa:  " << a+b << endl;
}

void calcDiv(int a, int b){
    if(b == 0){
         cout << "Virhe:nollalla jakaminen!!"   << endl;

    }else{
         cout << "Osamaara:  " << a/b << endl;
    }
}

int retSum(int a, int b){
    return  a + b;
}
double retDiv(int a, int b){
    if(b==0){
        throw std::runtime_error("Jakaja ei saa olla nolla.");//throw,then fuction stops,no need for a return
    }else{
        return static_cast<double>(a) / b;
    }

}

int main()
{

    int a, b;
    cout << "Anna numero " << endl;
    cin >> a;
    cout << "Anna toinen numero " << endl;
    cin >> b;

    //funktion kutusminen
    calcSum(a, b);
    calcDiv(a, b);

    int sumTulos = retSum(a, b);
    cout << a << "+" << b << "="<< sumTulos << endl;

    try{
        double divTulos = retDiv(a, b);
        cout << a << "/" << b << "="<< divTulos << endl;

    } catch(const std::runtime_error &e){
        cout << "Virhe:" << e.what() << endl;
    }
    return 0;
}


