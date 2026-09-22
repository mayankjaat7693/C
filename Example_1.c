#include<stdio.h>
int main()
{
int physics,chemistry,hindi,english,math;

printf("Enter marks of physics: ");
scanf("%d",&physics);
if(physics<0 || physics>100)
{
printf("invalid physics marks!!!\n");
return 0;
}
printf("Enter marks of chemistry: ");
scanf("%d",&chemistry);
if(chemistry<0 || chemistry>100)
{
printf("Invalid chemistry marks!!!\n");
return 0;
}
printf("Enter marks of math: ");
scanf("%d",&math);
if(math<0 || math>100)
{
printf("Invalid math marks!!!\n");
return 0;
}
printf("Enter marks of english: ");
scanf("%d",&english);
if(english<0 || english>100)
{
printf("Invalid english marks!!!\n");
return 0;
}
printf("Enter marks of hindi: ");
scanf("%d",&hindi);
if(hindi<0 || hindi>100)
{
printf("Invalid hindi marks!!!\n");
return 0;
}


if(physics>=33 && chemistry>=33 && english>=33 && math>=33 && hindi>=33)
{
printf("Result : Pass\n");
}
else if(physics<33 && chemistry>=33 && english>=33 && math>=33 && hindi>=33)
      {
          printf("Result : Compartment in Physics\n");
      }
else if(physics>=33 && chemistry<33 && english>=33 && math>=33 && hindi>=33)
      {
          printf("Result : Compartment in Chemistry\n");
      }
else if(physics>=33 && chemistry>=33 && english<33 && math>=33 && hindi>=33)
      {
          printf("Result : Compartment in English\n");
      }
else if(physics>=33 && chemistry>=33 && english>=33 && math<33 && hindi>=33)
      {
         printf("Result : Compartment in Math\n");
      }
else if(physics>=33 && chemistry>=33 && english>=33 && math>=33 && hindi<33)
      {
         printf("Result : Compartment in Hindi\n");
      }
   else 
      {
         printf("Result : Fail\n"); 
      }
return 0;
}
