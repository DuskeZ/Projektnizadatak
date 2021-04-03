#ifndef REVIZOR_HPP_INCLUDED
#define REVIZOR_HPP_INCLUDED
#include "radnik.hpp"
#include <list>
using namespace std;

class Revizor:public Radnik{

private:
   list<string> datumi;


public:
    Revizor(string Ime,string Prezime,double VisinaPlate,string Nadredjeni);
    void info()
    {
        cout<<"Ime: "<<ime<<" Prezime: "<<prezime<<endl<<"Pozicija: Revizor "<<" plata: "<<visinaPlate<<" nadredjeni: "<<nadredjeni<<endl;


    }





};



#endif // REVIZOR_HPP_INCLUDED
