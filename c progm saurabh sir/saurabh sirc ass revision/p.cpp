// progrma to check given two number are co prime or not
#include<stdio.h>
int main()
{
int i,j,a,b,e;
scanf("%d%d",&a,&b);
  if(a<b)
   e=a;
   else
   e=b;
   for(i=2;i<=e;i++)
   {
   	if((a%i==0)&&(b%i==0))
   	 break;
   }
   (i==e+1)?printf("co-prime"):printf("not co- prime");
}
