#include "luottotili.h"
#include <iostream>
using namespace std;

Luottotili::Luottotili(string& omistaja, double raja): Pankkitili(omistaja), luottoRaja(raja)
{
    cout << "Luottotili luotu " << omistaja << ":lle" << "Luottoraja: " << luottoRaja << endl;
}

bool Luottotili::deposit(double talletus)
{
    if (talletus <= 0)
        return false;
    saldo += talletus;
    if (saldo > 0)
        saldo = 0;
    return true;
}

bool Luottotili::withdraw(double nosto)
{
    if (nosto <= 0)
        return false;
    if (saldo - nosto < -luottoRaja)
        return false;
    saldo -= nosto;
    if (saldo > 0)
        saldo = 0;
    return true;
}
