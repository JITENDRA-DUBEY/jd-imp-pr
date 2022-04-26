//wap to print lagest elem in 10 size array
#include<stdio.h>
int main()
{
int i,j,n,min;
printf("plzz enter the number of var;-\n");
scanf("%d",&n);
int a[n];
printf("plzz enter %d numbers;-\n",n);
for(i=0;i<=n-1;i++)
{
    scanf("%d",&a[i]);//this is for take n element of array
    if(i==0)//vvvmi
   {
       min=a[0];
   }
if(i>0)
{
    if(min>a[i])
        min=a[i];
}
}
printf("min=%d",min);
return 0;
}
