#include <iostream>
#include "dht.h"
using namespace std;

int main()
{
    DHT olio;
    olio.begin();

    for(int i = 0;i<10;i++)
    {
        cout<<"Lampotila " <<olio.readTemperature()<<endl;
    }
    return 0;
}
