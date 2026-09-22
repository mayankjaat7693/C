/* Name : Mayank Jaat
   Date : 21 March 2026
   Assignment : Input/output predefine fuction ( printf [output]        scandf [input] )
*/
#include<stdio.h>                 //printf and scanf define stdio library file
                                  // stdio stand for standard input/output
int main()
{
int x;
printf("Enter a number: ");
scanf("%d",&x);
int y;
printf("Enter a number: ");
scanf("%d",&y);
int z=x+y;
printf("Total of %d and %d is %d\n",x,y,z);
return 0;
}
