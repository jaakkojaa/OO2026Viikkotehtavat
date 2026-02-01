#include "pankkitili.h"
#include <iostream>
using namespace std;
Pankkitili::Pankkitili(string nimi)
{
    cout << "Pankkitili luotu " << nimi<< ":lle" <<endl;
    omistaja = nimi;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double talletus)
{
    if (talletus < 0)
    {
        cout<< "Ei voi tallettaa negatiivista maaraa. Talletus epaonnistui" << endl;
        return false;
    }
    else if (talletus > 0)
    {
        saldo += talletus;
        cout << "Talletus onnistui. Tilin uusi saldo: " << saldo << endl;
        return true;
    }
}

bool Pankkitili::withdraw(double nosto)
{
    if (nosto < 0)
    {
        cout << "Ei voi tallettaa negatiivista maaraa. " <<endl;
        return false;
    }
    else if (nosto > saldo)
    {
        cout << "Tilin saldo ei riita nostoon." <<endl;
        return false;
    }
    else if (nosto > 0)
    {
        saldo -= nosto;
        cout << "Nosto onnistui. Tilin uusi saldo: " << saldo << endl;
        return true;
    }
}
