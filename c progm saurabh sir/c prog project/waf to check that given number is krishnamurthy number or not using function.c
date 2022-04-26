// to check that given number is krishnamurthy number or not using function
#include<stdio.h>
void krs(int n);
int fact(int x);
int main()
{
    int m;
    printf("plzz enter a number:-\n");
    scanf("%d",&m);
    krs(m);
    return 0;
}
void krs(int n)
{
    int i,r,j,k,d=0,on,sum=0;
    on=n;
    while(n!=0)
    {   n=n/10;
        d++;
    } n=on;
    for(i=1;i<=d;i++)
    {
        r=on%10;
       k= fact(r);
        on=on/10;
        sum=sum+k;
    }

   (sum==n)?printf("%d is krishnamurthy number",n):printf("%d is not krishnamurthy number",n);
}


int fact(int x)
{   int fac=1;
  for(x;x>=1;x--)
	{
	fac=fac*x;
	}
	return fac;
}
