//include<stdio.h>
int main()
{
int a[10],b[10],temp,i,j;
int *p=a;
int *q=b;
printf("plzz enter array elements\n");
for(i=0;i<10;i++)
{
 scanf("%d",p+i);
}
 temp=*(p+9);
 for(i=1;i<10;i++)
 {
   *(q+i)=*(p+i-1);
 }
 *(q+0)=temp;

for(i=0;i<10;i++)
{
 printf("%d\t",*(q+i));
}
}
