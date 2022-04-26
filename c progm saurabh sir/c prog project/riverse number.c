#include<stdio.h>
int main()
{
int n=123,d=3,m,i;
for(i=1;i<=3;i++)
{
m=n%10;
n=n/10;
printf("%d",m);

}
return 0;
}
