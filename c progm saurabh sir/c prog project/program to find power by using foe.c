// program to find power using for loop
#include<stdio.h>
#include<math.h>
int main()
{
    int n=2,i=1,j=1,m;
    printf("plzz enter power number");
    scanf("%d",&m);
    for(i;i<=m;i++)
    {

        j=j*2;
    }
    printf("%d^%d=%d",n,m,j);
return 0;
}
