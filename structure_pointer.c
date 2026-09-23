/* Name : Mayank Jaat
   Date : 19 May 2026
   Assignment : Create own data type using structure and create multiple structure using array and using pointer.
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
struct rectangle *ptr,*p;            // Pointer ( -> )
p=bb;
ptr=bb;
for(int i=0;i<10;i++)
{
printf("Enter Length: ");
scanf("%d",&p->length);
printf("Enter Breadth: ");
scanf("%d",&p->breadth);
p->area=p->breadth*p->length;
p++;
}
int i,j,g;
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
if((ptr+i)->length > (ptr+j)->length)
{
g=(ptr+i)->length;
(ptr+i)->length=(ptr+j)->length;
(ptr+j)->length=g;

g=(ptr+i)->breadth;
(ptr+i)->breadth=(ptr+j)->breadth;
(ptr+j)->breadth=g;

g=(ptr+i)->area;
(ptr+i)->area=(ptr+j)->area;
(ptr+j)->area=g;
}
else if((ptr+i)->length == (ptr+j)->length && (ptr+i)->breadth > (ptr+j)->breadth)
{
g=(ptr+i)->length;
(ptr+i)->length=(ptr+j)->length;
(ptr+j)->length=g;

g=(ptr+i)->breadth;
(ptr+i)->breadth=(ptr+j)->breadth;
(ptr+j)->breadth=g;

g=(ptr+i)->area;
(ptr+i)->area=(ptr+j)->area;
(ptr+j)->area=g;
}
}
}
for(i=0;i<10;i++)
{
printf("Length: %d\n",(ptr+i)->length);
printf("Breadth: %d\n",(ptr+i)->breadth);
printf("Area: %d\n\n",(ptr+i)->area);
}
return 0;
}
