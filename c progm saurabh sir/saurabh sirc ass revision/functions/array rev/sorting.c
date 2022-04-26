//include<stdio.h>
int main()
{
int a[10],temp,i,j;
int *p=a;
printf("plzz enter array elements\n");
for(i=0;i<10;i++)
{
 scanf("%d",p+i);
}

for(i=0;i<10;i++)
{
 for(j=i+1;j<10;j++)
 {
    if(*(p+i)>*(p+j))
    {
      temp=*(p+i);
      *(p+i)=*(p+j);
      *(p+j)=temp;
    }
 }
}
for(i=0;i<10;i++)
{
 printf("%d\t",*(p+i));
}
}
