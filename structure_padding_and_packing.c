/* Name : Mayank Jaat
   Date : 8 June 2026
   Topic: Stucture padding and packing ( memory allignment )
*/
#include<stdio.h>

struct bulb
{
int wattage;
double price;
};

int main()
{
struct bulb b;
printf("Size of b: %d\n",sizeof(b));
return 0;
}

