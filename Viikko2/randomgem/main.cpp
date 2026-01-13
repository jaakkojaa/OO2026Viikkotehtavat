#include <iostream>
#include "random.h"
using namespace std;

int main()
{
    random olio; // tässä vaiheessa kutsuttiin
                 // luokan konstruktori Random()
    olio.setSeed(time(0));
    for(int i = 0;i<10;i++)
    {
        cout<<"satunnaisluku = " <<(olio.rand()%20) +1<<endl;
    }
    return 0;
}
