#include <iostream>
#include "radnik.hpp"
#include "racunovodja.hpp"
#include "komercijalista.hpp"
#include "revizor.hpp"
using namespace std;

int main()
{
    Racunovodja r("Dusan","Zvekic",100000,"Jole","Singidunum",500000);
    r.info();
    cout<<endl;

    Komercijalista k("Marko","Zvekic",90000,"Jole");
    k.info();
    cout<<endl;

    Revizor rv("Vesna","Zvekic",120000,"");
    rv.info();
    cout<<endl;

    r.Bonus(0.05);
    r.info();
    return 0;
}
