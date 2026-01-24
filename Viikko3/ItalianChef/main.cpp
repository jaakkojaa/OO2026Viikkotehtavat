#include <iostream>
#include "italianchef.h"
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
ItalianChef luigi("Luigi");
luigi.askSecret("pizza", 20, 15);
luigi.askSecret("wrong", 20, 15);

}
