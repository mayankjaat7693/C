/* Name : Mayank Jaat
   Date : 12 April 2026
   Assignment : string with space
*/
#include<stdio.h>
int main()
{
char ch[100];
printf("Enter a string: ");
scanf("%[^\n]s",ch);                       // %[^\n]s string with space (format specifier)
printf("String: %s",ch);
return 0;
}
