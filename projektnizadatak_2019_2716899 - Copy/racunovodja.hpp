#ifndef RACUNOVODJA_HPP_INCLUDED
#define RACUNOVODJA_HPP_INCLUDED
#include "radnik.hpp"
using namespace std;

class Racunovodja:public Radnik{

private:
    string izdavac;
    int maxPrihod;

public:
    Racunovodja(string Ime,string Prezime,double VisinaPlate,string Nadredjeni,string Izdavac,int MaxPrihod);
    void info()
    {
        cout<<"Ime: "<<ime<<" Prezime: "<<prezime<<endl<<"Pozicija: Racunovodja "<<" plata: "<<visinaPlate<<" nadredjeni: "<<nadredjeni<< " Izdavac: "<<izdavac<<" MaxPrihodi: "<<maxPrihod<<endl;


    }





};


#endif // RACUNOVODJA_HPP_INCLUDED
