//wap f to frequency count
#include<stdio.h>
int main()
{

    int i,n,j;
printf("plzz enter the total number of elements;-\n");
scanf("%d",&n);
int a[n];
printf("plzz enter elements;-\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}int d=0;
for(i=0;i<=n-1;i++)
{
    for(j=0;j<i;j++)
        if(a[i]==a[j])
          {
            break;
              printf("%d\n",d);}
    if(i==j)
        printf("%d\t",a[i]);

      d++;
}     printf("%d",d);
return 0;

}
