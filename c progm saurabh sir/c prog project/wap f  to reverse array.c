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
  int i,j,temp;
 for(i=0;i<=size-1;i++)
 {
   j=size-1-i;
    if(i<size/2)
   {
    temp=b[i];
    b[i]=b[j];
    b[j]=temp;
   }printf("%d",b[i]);
 }
}
