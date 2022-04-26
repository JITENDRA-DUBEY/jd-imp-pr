//wap to sum of n numb by using array
#include<stdio.h>
int main()
{int n;
printf("plzz enter n how many number u want to add \n");
scanf("%d",&n);
int i,s=0,a[n];
printf("plzz enter %d numbers:-\n",n);
for(i=0;i<=n-1;i++)
{

    scanf("%d",&a[i]);
    s=s+a[i];
}
printf("sum of %d numbs =%d",n,s);

return 0;
}
