/* Name : Mayank Jaat
   Date : 03 April 2026
   assignment : Example of Student result  ( if all subject > 33 : print Division,Total marks,percentage)
                                           ( if one subject < 33 : print Compartment in subject name)
                                           ( if more than one subject < 33 : print Fail in subject name) 
*/
#include<stdio.h>
int main()
{
int physics,chemistry,hindi,english,math;
int fail_count;
int total,percentage,division;
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

fail_count=0;
if(physics<33)++fail_count;
if(chemistry<33)++fail_count;
if(english<33)++fail_count;
if(math<33)++fail_count;
if(hindi<33)++fail_count;
if(fail_count==0)
{
printf("Result : Pass\n");
total=physics+chemistry+english+math+hindi;
printf("Total Marks : %d\n",total);
percentage=total/5;
printf("Percentage : %d%\n",percentage);
if(percentage>=75)printf("Division : A++\n");
else if(percentage<75 && percentage>=60)printf("Division : A\n");
else if(percentage>=45 && percentage<60)printf("Division : B\n");
else printf("Division : C\n");
}
if(fail_count==1)
{
if(physics<33)printf("Result : Compartment in Physics\n");
if(chemistry<33)printf("Result : Compartment in Chemistry\n");
if(hindi<33)printf("Result : Compartment in Hindi\n");
if(english<33)printf("Result : Compartment in English\n");
if(math<33)printf("Result : Compartment in Math\n");
}
if(fail_count>1)
{
printf("Result : Fail\n");
printf("-------------\n");
if(physics<33)printf("Physics\n");
if(chemistry<33)printf("Chemistry\n");
if(hindi<33)printf("Hindi\n");
if(english<33)printf("English\n");
if(math<33)printf("Math\n");
}
return 0;
}
