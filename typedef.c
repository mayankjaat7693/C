/* Name : Mayank Jaat
   Date : 12 July 2026
   Assignment : Typedef
*/
#include<stdio.h>

typedef struct rectangle               // use typedef keyword to create struct rectangle alias like rectangle
{
int length;
int breadth;
int area;
}rectangle;  // alias

int main()
{
rectangle bb;
printf("Enter Length: ");
scanf("%d",&bb.length);
printf("Enter Breadth: ");
scanf("%d",&bb.breadth);
bb.area=bb.length*bb.breadth;
printf("Area: %d\n",bb.area);
return 0;
}

