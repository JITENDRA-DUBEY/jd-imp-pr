//program to checck that the number is  fibonacci seq or not
#include<stdio.h>
int main()
{
int n,f,s,i,sum;
printf("plzz enter first two term of series");
scanf("%d%d",&f,&s);
printf("plzz enter number ");
scanf("%d",&n);
//printf("%d%d",f,s);
for(i=1;i<=100;i++)
{
sum=f+s;
//printf("%d",sum);
if(n==sum)
  {
	printf(" yes numb is a term of feb sequence");
 	break;   
  }
f=s,s=sum;
}
if(i>100)
printf("not lies in feb seq");
return 0;
}
