
#include<stdio.h>
int main()
{

    int i,n,j,min;
printf("plzz enter the total number of elements;-\n");
scanf("%d",&n);
int a[n];
printf("plzz enter elements;-\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
    for(j=0;j<i;j++)
        if(a[i]==a[j])
            break;
    if(i==j)
        printf("%d",a[i]);



}
return 0;

}
