//waf to find greatest element of array elements ts sr
#include<stdio.h>
int greatest(int b[],int size);
int main()
{
int i,size,k;
printf("plzz enter the size value:-\n");
scanf("%d",&size);
int a[size];
printf("plzz enter the elements :-\n");
for(i=0;i<=size-1;i++)
{
   scanf("%d",&a[i]);
}
k=greatest(a,size);
printf(" greatest element=%d",k);
getchar();
return 0;
}
int greatest(int b[],int size)
{
 int i,max;
 max=b[0];
 for(i=1;i<=size-1;i++)
   {
     if(b[i]>max)
     max=b[i];
   }return(max);
}
