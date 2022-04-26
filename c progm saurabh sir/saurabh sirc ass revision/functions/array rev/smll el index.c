//include<stdio.h>
int main()
{
int a[10],min,i;
int *p=a;
printf("plzz enter array elements\n");
for(i=0;i<10;i++)
{
 scanf("%d",p+i);
}
min=a[0];
for(i=0;i<10;i++)
{
  if(*(p+i)<min)
  {
   min =*(p+i);
  }
}
//printf("min el=%d",min);
for(i=0;i<10;i++)
{
if(min==*(p+i))
break;
}
printf("value of smallest element index=%d",i);
}
