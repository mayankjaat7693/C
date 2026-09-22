/* Name : Mayank Jaat
   Date : 31 March 2026
   Assignment : Arithmetic operator               (    + (plus)                : Addition
                                                       - (minus/hyphen/desh)   : Subtraction
                                                       * (star/asterisk)       : Multiplication  
                                                       / (front slash)         : Division
                                                       % (percentage)          : Modulo
                                                                                                      )
*/                        
#include<stdio.h>
int main()
{
int x;
printf("Enter a number: ");
scanf("%d",&x);
int y;
printf("Enter another number: ");
scanf("%d",&y);
printf("Addition : %d\n",x+y);
printf("Subtraction : %d\n",x-y);
printf("Multiplication : %d\n",x*y);
printf("Division : %d\n",x/y);
printf("Modulo : %d\n",x%y);
return 0;
}

