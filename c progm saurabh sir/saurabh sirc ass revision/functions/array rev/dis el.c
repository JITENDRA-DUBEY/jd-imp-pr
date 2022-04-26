
#include<stdio.h>
int main()
{int n;
printf("plzz enter the size of array\n");
scanf("%d",&n);
int a[n],i,j;
int *p=a;
printf("plzz enter array elements\n");
for(i=0;i<n;i++)
{
 scanf("%d",p+i);
}
fflush(stdin);
for(i=0;i<n;i++)
{
 for(j=0;j<i;j++)
 {
   if(*(p+i)==*(p+j))
   break;
 }if(i==j)
 {
    printf("%d\t",*(p+j));

 }
}
}



