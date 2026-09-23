/* Name : Mayank Jaat
   Date : 19 June 2026
   Assignment : Example of data Collection as per requirement
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int num;
int collection_size;
int *ptr,*temp;
int i,j,g;
int choice;
int collection;
ptr=NULL;

do{
printf("1.Create Collection\n");
printf("2.Sort Collection\n");
printf("3.Print Collection\n");
printf("4.Exit\n");
printf("Enter choice: ");
scanf("%d",&choice);
if(choice==1)
{
printf("Enter a number: ");
scanf("%d",&num);
if(!ptr)
{
ptr=(int *)malloc(sizeof(int));
ptr[0]=num;
collection_size=1;
}
else
{
temp=(int *)malloc(sizeof(int)*collection_size+1);
for(i=0;i<collection_size;i++)temp[i]=ptr[i];
temp[i]=num;
free(ptr);
ptr=temp;
++collection_size;
}
}
if(choice==2)
{
for(i=0;i<collection_size-1;i++)
{
for(j=i+1;j<collection_size;j++)
{
if(ptr[i]>ptr[j])
{
g=ptr[i];
ptr[i]=ptr[j];
ptr[j]=g;
}
}
}
}
if(choice==3)
{
for(i=0;i<collection_size;i++)printf("%d\n",ptr[i]);
}
if(choice<0 || choice>4)printf("Invalid choice\n");
}while(choice!=4);


return 0;
}

