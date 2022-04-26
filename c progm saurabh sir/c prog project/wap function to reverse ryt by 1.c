//wap f to reverse an array#include<stdio.h>
void reverse(int b[],int size);
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
reverse(a,size);
getchar();
return 0;
}
void reverse(int b[],int size)
{
  int i,j;
  int c[size];
 for(i=0;i<=size-1;i++)
 {  if(i==0)
    {
    c[i]=b[size-1];
    }
   if(i>0)
   {
    c[i]=b[i-1];
   }
   printf("%d",c[i]);

   }
 }

