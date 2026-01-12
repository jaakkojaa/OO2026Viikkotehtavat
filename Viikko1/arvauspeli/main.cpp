#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int game(int maxnum)
{
int arvaus;
int satunnaisluku;
satunnaisluku = rand() % maxnum;
for(int i = 1; i < 1000; i++)
{
    cout << "Arvaa luku" << endl;
    cin >> arvaus;
    if (arvaus > satunnaisluku)
    {
        cout << "Arvauksesi on liian iso" << endl;
    }
    else if (arvaus < satunnaisluku)
    {
        cout << "Arvauksesi on liian pieni" << endl;
    }
    else if (arvaus == satunnaisluku)
    {
        cout << "Oikein! Voitit pelin." << endl;
        return i;
        break;
    }
}
}
int main()
{
    srand(time(NULL));
    int maara = game(40);
    cout << "Arvauksien maara pelissa: " << maara <<endl;
    return 0;
}
