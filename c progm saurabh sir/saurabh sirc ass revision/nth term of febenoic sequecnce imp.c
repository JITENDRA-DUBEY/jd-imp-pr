#include<stdio.h>
int main()
{
int n,f=0,s=1,sum=0,on,i,e;
//printf("plzz enter the total number of febonic seq\n");
//scanf("%d",&n);
printf("first term of feb seq is 0 and sec=1\n");
printf("plzz enter a number\n");
scanf("%d",&e);
on=1000;
//printf("%d\n%d\n",f,s);
for(i=1;i<=on;i++)
{
    sum=f+s;
   if(e==sum)
   {
       break;
   }
    f=s;s=sum;

}
 if(i<on)
    printf("number exist");
 else
    printf("number not exist");

}
