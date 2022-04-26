//wap to sum of 10 numb by using array
#include<stdio.h>
int main()
{
int i,s=0,a[10];
printf("plzz enter 10 numbers:-\n");
for(i=0;i<=9;i++)
{

    scanf("%d",&a[i]);
    s=s+a[i];
}
printf("%d",s);

return 0;
}
