#ifndef RADNIK_HPP_INCLUDED
#define RADNIK_HPP_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Radnik{
    protected:
    string ime,prezime;
    double visinaPlate;
    string nadredjeni;

    public:
        string getIme(){return ime;}
        string getPrezime(){return prezime;}
        int getPlata(){return visinaPlate;}
        string getNadredjeni(){return nadredjeni;}

        Radnik(string Ime,string Prezime,double VisinaPlate,string Nadredjeni);
        virtual void info()=0;

        void Bonus(double x)
        {
            visinaPlate+=visinaPlate*x;

        }


};


#endif // RADNIK_HPP_INCLUDED
