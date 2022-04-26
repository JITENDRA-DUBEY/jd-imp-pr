//rotate of an array
#include<stdio.h>
int main()
{
int i,n;
printf("plzzz enter the size of array");
scanf("%d",&n);
printf("plzz enter the numb\n");
int a[n];
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
printf("reverse array:-\n");
for(i=0;i<=n-1;i++)
{
    printf("%d\n",a[n-1-i]);
}
return 0;
}
