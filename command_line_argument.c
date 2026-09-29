/* Name : Mayank Jaat
   Date : 11 July 2026
   Assignment : Command Line Argument
*/
#include<stdio.h>

int str2int(char *ptr)
{
int acc=0;
int negative=0;
if(*ptr<'-')
{
negative=1;
ptr++;
}
while(ptr!=NULL)
{
acc=acc*10+(*ptr-48);
++ptr;
}
if(negative)acc=acc*(-1);
return acc;
}

int main(int argc,char *argv[])
{
if(argc<2)
{
printf("Usage[ program argument argument....]\n");
return 0; 
}
int sum=0;
int i;
for(i=1;i<argc;i++)sum=sum+str2int(argv[i]);1
printf("Sum: %d\n",sum);
return 0;
}
