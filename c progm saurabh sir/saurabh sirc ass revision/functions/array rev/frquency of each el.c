
#include<stdio.h>
int main()
{int n;
printf("plzz enter the size of array\n");
scanf("%d",&n);
int a[n],b[n],i,j,d,e,m=0;
int *p=a;
printf("plzz enter array elements\n");
for(i=0;i<n;i++)
{
 scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
 for(j=0;j<i;j++)
 {
   if(*(p+i)==*(p+j))
   break;
 }if(i==j)
 {
   b[m]=*(p+i);
//printf("%d\t",*(p+i));
  m++;
 }
}
 //for(i=0;i<m;i++)
 //{

    // printf("%d\t",b[i]);
 //}
 for(j=0;j<m;j++)
 {  d=0;
 for(i=0;i<n;i++)
 {
    if(b[j]==a[i])
    {
        d++;
    }
 }
  printf("%d occurs %d times\n",b[j],d);
}
}



