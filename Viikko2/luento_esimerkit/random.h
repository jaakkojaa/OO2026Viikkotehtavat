#ifndef RANDOM_H
#define RANDOM_H

class random
{
public:
    random(); // konstruktori suoritetaan
    void setSeed(long long); // aina kun luokasta luodaan
    long long getSeed(); // olio
    long long rand();

private:
    long long a;
    long long c;
    long long xn;
    long long mod;
};

#endif // RANDOM_H
