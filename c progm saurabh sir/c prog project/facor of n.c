//program to find all factor of any number
#include<stdio.h>
int main()
{
    int n,i,r;
    printf("plzz enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
            printf("%d\t",i);
        else
            printf("");
    }
    return 0;
}
