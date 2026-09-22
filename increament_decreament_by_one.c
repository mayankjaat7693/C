/* Name : Mayank Jaat
   Date : 31 March 2026
   Assignment : Increament/decreament by one   ( prefix increament/decreament and postfix increament/decreament )
*/
#include<stdio.h>
int main()
{
int x;
printf("Enter a number: ");
scanf("%d",&x);
printf("X:(%d)Prefix increament\n",x++);
printf("X:(%d)Postfix increament\n",++x);
printf("X:(%d)Prefix decreament\n",x--);
printf("X:(%d)postfix decreament\n",--x);
return 0;
}
