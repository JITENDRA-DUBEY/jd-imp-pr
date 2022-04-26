// program to count the occurence of a given naum,ber

#include<stdio.h>
int main()
{
    int i,n,j,m=0,count,sum=0;
printf("plzz enter the total number of elements;-\n");
scanf("%d",&n);
fflush(stdin);
int a[n],b[100];
printf("plzz enter elements;-\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}fflush(stdin);
printf("\n");
for(i=0;i<=n-1;i++)
{
    for(j=0;j<i;j++)
        if(a[i]==a[j])
            break;
    if(i==j)
      {
        b[m]=a[i];
         m++;
      }
}printf("\n");
for(i=0;i<=n-1;i++)
{
    printf("%d\n",a[i]);
}printf("\n");
for(i=0;i<m;i++)
{
    printf("%d\t",b[i]);
}
for(i=0;i<m;i++)
{    count =0;
    for(j=0;j<=n-1;j++)
    {
        if(b[i]==a[j])
            {count++;
            if((count/2)>=1)
            {sum=sum+(count/2);}
            }
    }
    printf("%d comes at %d times\n",b[i],count);

} printf("%d",sum);


return 0;

}
