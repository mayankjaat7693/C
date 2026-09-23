/* Name : Mayank Jaat
   Date : 15 May 2026
   Assignment : Pointer Arithmetic
*/
#include<stdio.h>

void data(int *ptr)
{
*(ptr+0)=10;
*(ptr+1)=20;
*(ptr+2)=30;
*(ptr+3)=40;
*(ptr+4)=50;
*(ptr+5)=60;
*(ptr+6)=70;
*(ptr+7)=80;
*(ptr+8)=90;
*(ptr+9)=100;
*(ptr-9);
for(int i=0;i<=9;++i)printf("%d\n",*(ptr+i));
}

int main()
{
int arr[10];
data(arr);
return 0;
}
