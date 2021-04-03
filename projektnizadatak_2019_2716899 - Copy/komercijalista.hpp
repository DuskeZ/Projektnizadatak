#ifndef KOMERCIJALISTA_HPP_INCLUDED
#define KOMERCIJALISTA_HPP_INCLUDED
#include "radnik.hpp"
#include <list>
using namespace std;

class Komercijalista:public Radnik{

private:
   list<string> kontakti;


public:
    Komercijalista(string Ime,string Prezime,double VisinaPlate,string Nadredjeni);
    void info()
    {
        cout<<"Ime: "<<ime<<" Prezime: "<<prezime<<endl<<"Pozicija: Komercijalista "<<" plata: "<<visinaPlate<<" nadredjeni: "<<nadredjeni<<endl;


    }





};




#endif // KOMERCIJALISTA_HPP_INCLUDED
