#include "italianchef.h"
Chef::Chef(string name)
{
    chefName = name;
    cout << "Kokki " << chefName << " on valmiina!" << endl;
}

Chef::~Chef()
{
    cout << "Kokki " << chefName <<" destruktori" << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ingredients)
{
    int portions = ingredients / 5;
    cout << "Chef " << chefName <<" with " << ingredients
    << " ingredients can make " << portions << " salad portions" << endl;
    return portions;
}

int Chef::makeSoup(int ingredients)
{
    int portions = ingredients / 3;
    cout << "Chef " << chefName <<" with " << ingredients
         << " ingredients can make " << portions << " soup portions" << endl;
    return portions;
}


ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef " << chefName << " on valmis kokkaamaan" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Kokki " << chefName <<" destruktori" << endl;
}

bool ItalianChef::askSecret(string givenPassword, int flourAmount, int waterAmount)
{
    if (givenPassword == password)
    {
    cout << "Oikea salasana! Chef " <<chefName << " voi nyt tehda pizzaa." << endl;
    makepizza(flourAmount, waterAmount);
    return true;
    }
    cout << "Vaara salasana! Chef " << chefName <<" ei voi tehda pizzaa." <<endl;
    return false;
}

int ItalianChef::makepizza(int flourAmount, int waterAmount)
{
    int pizzasFromFlour = flourAmount / 5;
    int pizzasFromWater = waterAmount / 5;
    int pizzas = min(pizzasFromFlour, pizzasFromWater);
    cout << "Chef " << chefName << " with " <<flourAmount << " flour and "
    << waterAmount << " water can make " << pizzas << " pizza" << endl;
    return pizzas;
}
