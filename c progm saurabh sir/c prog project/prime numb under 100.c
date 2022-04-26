//all prime number under 100
#include<stdio.h>
int main()
{
int n=100,r,i,j;
for(i=2;i<=n-1;i++)
{

    for(j=2;j<=i;j++)
    {

        r=i%j;
        if(r==0)
            break;
    }
    (j==i)?printf("%d\n",j):printf("");
}
return 0;




}
