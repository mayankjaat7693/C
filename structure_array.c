/* Name : Mayank Jaat
   Date : 19 May 2026
   Assignment : Create own data type using structure and create multiple structure using array.
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
struct rectangle bb[10];              // bb is structure of rectangle
                                      // DOT (.) is Member Access operator
for(int i=0;i<10;i++)
{
printf("Enter Length: ");
scanf("%d",&bb[i].length);
printf("Enter Breadth: ");
scanf("%d",&bb[i].breadth);
bb[i].area=bb[i].breadth*bb[i].length;
}
int i,j,g;
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
if(bb[i].length>bb[j].length)
{
g=bb[i].length;
bb[i].length=bb[j].length;
bb[j].length=g;

g=bb[i].breadth;
bb[i].breadth=bb[j].breadth;
bb[j].breadth=g;

g=bb[i].area;
bb[i].area=bb[j].area;
bb[j].area=g;
}
else if(bb[i].length==bb[j].length && bb[i].breadth>bb[j].breadth)
{
g=bb[i].length;
bb[i].length=bb[j].length;
bb[j].length=g;

g=bb[i].breadth;
bb[i].breadth=bb[j].breadth;
bb[j].breadth=g;

g=bb[i].area;
bb[i].area=bb[j].area;
bb[j].area=g;
}
}
}
for(i=0;i<10;i++)
{
printf("Length: %d\n",bb[i].length);
printf("Breadth: %d\n",bb[i].breadth);
printf("Area: %d\n\n",bb[i].area);
}
return 0;
}
