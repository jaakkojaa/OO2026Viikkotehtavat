#ifndef ARVAUSPELI_H
#define ARVAUSPELI_H
class Game
{
public:
    Game(int a);
    ~Game();
    void play();
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};

#endif // ARVAUSPELI_H
