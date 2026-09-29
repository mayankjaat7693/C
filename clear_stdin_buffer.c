/* Name : Mayank Jaat
   Date : 30 May 2026
   Topic: clear stdin buffer 
*/
#include<stdio.h>

void clear_stdin_buffer()
{
while(getchar()!='\n');
}

int main()
{
int x;
printf("Enter a number: ");
scanf("%d",&x);
clear_stdin_buffer();
return 0;
}
