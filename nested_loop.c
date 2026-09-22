/* Name : Mayank Jaat
   Date : 09 April 2026
   assignment : Nested Loop
*/
#include<stdio.h>
int main()
{
int x=1;
while(x<=5)
{ 
int y=1;
    while(y<=5)
    {
       printf("%d%d  ",x,y);
       y++;
    }
printf("\n");
x++;
}
int i;
for(i=1;i<=5;i++)
{
  int j;
  for(j=1;j<=5;j++)
  {
     printf("%d%d  ",i,j);
  }
printf("\n");
}
return 0;
}
