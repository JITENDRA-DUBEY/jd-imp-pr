#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n],s=0,i;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
    
}

