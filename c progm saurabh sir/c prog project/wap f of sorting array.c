//waf to short n array of given size_
#include<stdio.h>
void sort(int b[],int size);
int main()
{
int i,size;
printf("plzz enter the size value:-\n");
scanf("%d",&size);
int a[size];
printf("plzz enter the elements :-\n");
for(i=0;i<=size-1;i++)
{
   scanf("%d",&a[i]);
}
sort(a,size);
getchar();
return 0;
}
void sort(int b[],int size)
{
 int temp,j,i;
 printf("sort or ascending orede:-\n");
 for(i=0;i<=size-1;i++)
   {
    for(j=i+1;j<=size-1;j++)
     {
     if(b[i]>b[j])
      {
       temp=b[i];
       b[i]=b[j];
       b[j]=temp;
      }
     }printf("%d\t",b[i]);
   }
}
