#include<stdio.h>
int main()
{

    int n=145,d=3,i=1,m,sum=0;
    for(i;i<=d;i++)
    {

        m=n%10;
        n=n/10;
        sum=sum+m;
    }
    printf("sum of digit=%d",sum);
    return 0;
}
