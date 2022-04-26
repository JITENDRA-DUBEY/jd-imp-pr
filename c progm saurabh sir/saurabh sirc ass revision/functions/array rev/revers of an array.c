//include<stdio.h>
int main()
{
    int n;

printf("plzz enter the array size\n");
scanf("%d",&n);
int a[n],temp,i,j;
int *p=a;
printf("plzz enter array elements\n");
for(i=0;i<n;i++)
{
 scanf("%d",p+i);
}

for(i=0;i<n;i++)
{
   j=n-1-i;

    if(i<n/2)

    {
      temp=*(p+i);
      *(p+i)=*(p+j);
      *(p+j)=temp;
    }

}
for(i=0;i<n;i++)
{
 printf("%d\t",*(p+i));
}
}
