#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
void kerroKahdella(int *ptr)
{
*ptr = 2 * *ptr;
}
int main(void)
{
int x = 5;
printf("Alkuarvo: %d\n",x);
kerroKahdella(&x);
printf("Uusi arvo on %d",x);

}
