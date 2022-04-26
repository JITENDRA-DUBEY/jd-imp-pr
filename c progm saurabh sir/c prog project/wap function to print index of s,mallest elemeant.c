
//waf to find smallest element of array elements ts sr
#include<stdio.h>
int smallest(int b[],int size);
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
k=smallest(a,size);
printf(" index of smallest element=%d",k);
getchar();
return 0;
}
int smallest(int b[],int size)
{
 int i,min;
 min=b[0];
 for(i=1;i<=size-1;i++)
   {
     if(b[i]<min)
     min=b[i];
   }for(i=0;i<=size-1;i++)
    {
     if(min==b[i])
     break;
    }return(i);
}
