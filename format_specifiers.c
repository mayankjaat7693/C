/* Name : Mayank Jaat
   Date : 30 May 2026
   Topic: format specifiers  
*/
#include<stdio.h>

int main()
{
int x=10;
char y='A';
char z[20]={"mayank"};
double u=20.5;
float s=40.55f;
unsigned int j=100;
int *k;
k=&x;

printf("%d %i\n",x,x);   // %d and %i for int format specifier
printf("%c\n",y);      // %c for char format specifier
printf("%s\n",z);      // %s for string format specifier
printf("%lf\n",u);     // %lf for doulbe format specifier
printf("%f\n",s);      // %f for float format specifier

printf("%u\n",j);      // %u for unsigned int format specifier
printf("%x %X\n",x,x); // %x and %X for hexadecimal format specifier
printf("%p\n",k);      // %p for pointer address format specifier
printf("%x\n",&x);     // for address of x

printf("%d%%\n",x);    // %% for % character format specifier
return 0;
}
