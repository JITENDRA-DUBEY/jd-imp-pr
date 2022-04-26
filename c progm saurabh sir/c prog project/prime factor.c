//prime factor of given numb
#include<stdio.h>
int main()
{
    int n,i,r;
    printf("plzz enter a number");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
    r=n%i;
    if(r!=0)
        printf("%d\t",i);
    else
        printf("");

    }
    return 0;
}
