#include "seuraaja.h"
#include <iostream>
#include <string>
using namespace std;
Seuraaja::Seuraaja(string follower)
{
    nimi = follower;
    cout << "Olio seuraaja " << nimi << " luotu." <<endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << nimi <<" vastaanotti viestin: " << viesti << endl;
}
