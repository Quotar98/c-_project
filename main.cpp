#include <iostream>

using namespace std;


class Samochod{
    string marka;
    string model;
    string poj_silnika;
    string ps1, ps2;

public:
    void wpisz_auto(){
        cout<<"Podaj marke: "<<endl;
        cin>>marka;
        cout<<"Podaj model: "<<endl;
        cin>>model;
    };
    void wyswietl_auto(){
        if(marka=="Porshe"||marka=="porshe"){
            ps1="2981 – 3996";
            cout<<"Twoje auto to: "<<marka<<endl;
            cout<<"Model auta to: "<<model<<endl;
            cout<<"Pojemnosc silnika to: "<<ps1<<" cm3"<<endl;

        }
        else if(marka=="Mazda"||marka=="mazda"){
            ps2="1798 - 3726";
            cout<<"Twoje auto to: "<<marka<<endl;
            cout<<"Model auta to: "<<model<<endl;
            cout<<"Pojemnosc silnika to: "<<ps2<<" cm3"<<endl;
        }
    };
};
int main()
{
    Samochod m1;
    m1.wpisz_auto();
    m1.wyswietl_auto();

    Samochod m2;
    m2.wpisz_auto();
    m2.wyswietl_auto();


    return 0;
}
