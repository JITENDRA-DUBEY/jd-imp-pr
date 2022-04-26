//program to find all factor of any number
#include<stdio.h>
int main()
{
    int n,i,r;
    printf("plzz enter a number");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        r=n%i;
        if(r==0)
            printf("");
        else
            printf("%d\t",i);
    }
    return 0;
}
