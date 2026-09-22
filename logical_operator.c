/* Name : Mayank Jaat
   Date : 28 March 2026
   Assignment : Logical operator     (        And ( && )
                                              Or  ( || )
                                                                   )
*/
#include<stdio.h>
int main()
{
int x=10;
int y=10; 
int z=100;

if( z==x && z==y )printf("equal\n");                                    // and ( && )
else printf("not equal\n");

if( z==x || z==y || z==x*y ) printf("equal\n");                         // or ( || )
else printf("not equal\n");
return 0;
}
