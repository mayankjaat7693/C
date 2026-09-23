/* Name : Mayank Jaat
   Date : 12 April 2026
   Assignment : Recursion
*/
#include<stdio.h>
int power(int n,int p)
{
if(p==1)return n;
return n*power(n,p-1);
}
int main()
{
int num,pw;
printf("Enter number: ");
scanf("%d",&num);
printf("Enter power of number: ");
scanf("%d",&pw);
printf("%d\n",power(num,pw));

return 0;
}
