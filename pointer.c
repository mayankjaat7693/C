/* Name : Mayank Jaat
   Date : 12 May 2026
   Assignment : Pointer (call by reference)
*/
#include<stdio.h>
void add_and_sub(int p,int q,int *m,int *k)          //address receive in pointer m and k
{
*m=p+q;                  // assign the value after addition 
*k=p-q;                  // assign the value after subtraction
}


int main()
{
int a,b,x,y;
printf("Enter a number: ");
scanf("%d",&a);
printf("Enter another number: ");
scanf("%d",&b);
add_and_sub(a,b,&x,&y);             // pass the address of x and y 
printf("Sum: %d\n",x);
printf("Product: %d\n",y);
return 0;
}

