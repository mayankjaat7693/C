/* Name : Mayank Jaat
   Date : 05 May 2026
   Assignment : Multiple prime number start and end include start and end.
*/
#include<stdio.h>
int addition()
{
int x,y;
printf("Enter a number: ");
scanf("%d",&x);
printf("Enter another number: ");
scanf("%d",&y);
return x+y;
}
void subtraction()
{
int x,y;
printf("Enter a number: ");
scanf("%d",&x);
printf("Enter another number: ");
scanf("%d",&y);
printf("Product : %d\n",x-y);
}

int multiplication();
void division();

int main()
{
printf("Sum : %d\n",addition());
subtraction();
printf("Multiply: %d\n",multiplication());
division();
return 0;
}

int multiplication()
{
int x,y;
printf("Enter a number: ");
scanf("%d",&x);
printf("Enter another number: ");
scanf("%d",&y);
return x*y;
}

void division()
{
int x,y;
printf("Enter a number: ");
scanf("%d",&x);
printf("Enter another number: ");
scanf("%d",&y);
printf("Divided : %d\n",x/y);
}
