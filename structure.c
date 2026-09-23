/* Name : Mayank Jaat
   Date : 12 April 2026
   Assignment : Create own data type using structure.
*/
#include<stdio.h>

struct rectangle                 // struct is keyword to use create data type
{
int length;
int breadth;
int area;
};

int main()
{
struct rectangle bb;              // bb is structure of rectangle
bb.length=10;              // DOT (.) is Member Access operator
bb.breadth=20;
bb.area=bb.length*bb.breadth;
printf("Rectangle : %d\n",bb.area);
return 0;
}
