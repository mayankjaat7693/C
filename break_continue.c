/* Name : Mayank Jaat
   Date : 09 April 2026
   assignment : Break and Continue keyword
*/
#include<stdio.h>
int main()
{
int x=1;
while(x<=5)
{ 
int y=1;
if(x==3)
{
x++;
continue;
}   
 while(y<=5)
    {
       printf("%d%d  ",x,y);
       if(y==3)break;
       y++;
    }
printf("\n");
x++;
}
int i;
for(i=1;i<=5;i++)
{
  int j;
if(i==3)
{
i++;
continue;
}
  for(j=1;j<=5;j++)
  {
     printf("%d%d  ",i,j);
     if(j==3)break;
  }
printf("\n");
}
return 0;
}
