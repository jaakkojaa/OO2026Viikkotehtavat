#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas matti("Matti", 1000.0);
    Asiakas maija("Maija", 1000.0);
    matti.talletus(500.0);
    cout << "Alkutilanne:" << endl;
    cout << "Matti saldo: ";
    matti.showSaldo();
    cout << "Maija saldo: ";
    maija.showSaldo();
    cout << "Matti siirtää 200 euroa Maijalle" << endl;
    if (matti.tiliSiirto(200.0, maija))
    {
        cout << "Siirto onnistui" << endl;
    }
    else
    {
        cout << "Siirto epaonnistui" << endl;
    }
    cout << "Tilanne siirron jalkeen:" << endl;
    cout << "Matti saldo: ";
    matti.showSaldo();
    cout << "Maija saldo: ";
    maija.showSaldo();
    return 0;
}
