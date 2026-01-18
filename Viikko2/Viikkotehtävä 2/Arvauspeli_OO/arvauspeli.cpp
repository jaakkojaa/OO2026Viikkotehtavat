#include "arvauspeli.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

Game::Game(int a)
{
    maxNumber = a;
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
    cout << "Konstruktori: Peli kaynnissa, maksimiarvo = " << maxNumber << endl;
}
Game::~Game()
{
    cout << "Destruktori: Peli paattyi, vapautetaan resurssit" << endl;
}


void Game::play()
{
    for(int i = 1; i < 1000; i++)
    {
        cout << "Arvaa luku valilta 1-" << maxNumber << endl;
        cin >> playerGuess;
        if (playerGuess < randomNumber)
        {
            cout << "Arvauksesi on liian pieni" << endl;
        }
        else if (playerGuess > randomNumber)
        {
            cout << "Arvauksesi on liian iso" << endl;
        }
        else if (playerGuess == randomNumber)
        {
            numOfGuesses = i;
            printGameResult();
            break;
        }
    }
}
void Game::printGameResult()
{
    cout << "Arvasit oikein! Arvauksien maara: " << numOfGuesses << endl;
}


