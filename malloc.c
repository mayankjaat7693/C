/* Name : Mayank Jaat
   Date : 23 May 2026
   Assignment : malloc ( dynamic memory allocation )
*/
#include<stdio.h>
#include<stdlib.h>
int *accept_input(int *acc)
{
int requirement;
int *z;
int i;
printf("Enter how many numbers you want feed: ");
scanf("%d",&requirement); 
z=(int *)malloc(sizeof(int)*requirement);
for(i=0;i<requirement;i++)
{
printf("Enter a number: ");
scanf("%d",&z[i]);
}
*acc=requirement;
return z;
}

int main()
{
int *p;
int count,sum;
p=accept_input(&count);
if(!p)
{
printf("Low Memory!!!\n");
return 0;
}
sum=0;
for(int i=0;i<count;i++)
{
sum+=p[i];
}
printf("Total: %d\n",sum);
return 0;
}

