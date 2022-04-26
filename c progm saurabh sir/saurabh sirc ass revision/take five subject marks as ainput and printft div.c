#include<stdio.h>
int main()
{
int i,j,sum=0;
float p;
int a[5];
for(i=0;i<=4;i++)
{
    printf("plzz enter the %d sub marks",i+1);
    scanf("%d",&a[i]);
}
   for(i=0;i<=4;i++)
   {
       sum=sum+a[i];
   }
    p=sum/5.0;
    if(p<33)
        printf("fail");5
    if(p>=33&&p<=45)
        printf("third division");
    if(p>=46&&p<=59)
            printf("second division");
     if(p>=60)
                printf("first division");
}



