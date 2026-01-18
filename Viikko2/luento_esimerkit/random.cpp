#include "random.h"



random::random()
{
    a = 1664525;
    c = 1013904233;
    xn = 0; // Seed-luku
    mod = 4294967296;
}

void random::setSeed(long long s)
{
    xn = s;
}

long long random::getSeed()
{
    return xn;
}

long long random::rand()
{
    long long tulos = ((a*xn)+c)%mod;
    xn = tulos;
    return xn;
}
