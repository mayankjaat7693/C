/* Name : Mayank Jaat
   Date : 09 July 2026
   Assignment : Macro 
*/
#include<stdio.h>

#define TRUE 1          // marco replace with 1 
#define FALSE 2         // marco replace with 0
#define false 1         // macro replace with 1
#define true 0          // macro replace with 0


int main()
{
printf("#define TRUE 1\n#define FALSE 2\n#define false 1\n#define true 0\n\n");
int x=1;
if(x==TRUE)                         // condition true 
{
printf("Macro: TRUE\n");
}
if(x==FALSE)                       // false
{
printf("Macro: FALSE\n");
}
int y=false;
if(y==TRUE)
{
printf("false==TRUE\n");
}
if(y==FALSE)
{
printf("true==FALSE\n");
}
return 0;
}
