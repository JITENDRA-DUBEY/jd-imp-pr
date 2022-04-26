//sum of boys and girls marks
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("plzz enter total number of student:-\n");
    scanf("%d\n",&n);
    int a[n];
    int*p=a;
     for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        if(i%2==0)
        {
            sum=sum+*(p+i);
        }

    }printf("sum of boys=%d",sum);

    return 0;
}
