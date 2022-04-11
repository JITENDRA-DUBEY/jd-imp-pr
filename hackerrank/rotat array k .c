#include<stdio.h>
int main()
{ int n,k,x;
//printf("plzz enter the size of an array anf the value of k,query\n");
scanf("%d %d %d",&n,&k,&x);
int a[n],b[n],e[x],i,r,m;
int *p=a,*q=b;
//printf("Enter element in array \n");
fflush(stdin);
for(i=0;i<n;i++){
    scanf("%d",(p+i));
}
fflush(stdin);
for(i=0;i<x;i++)
{
    //printf("plzz enter query index");
    scanf("%d",&e[i]);
}
   if(k%n==0)
   {
    for(i=0;i<n;i++)
    {
        *(q+i)=*(p+i);
    }
   }
   else
{
    if(k%n>0)
    {
    r=k%n;
for(i=0;i<r;i++)
{
*(q+i)=*(p+n-r+i);
}
for(i=r;i<n;i++){
  *(q+i)=*(p+i-r);
}
//for(i=0;i<n;i++){
//printf("%d",*(q+i));
//}
  }
}

for(i=0;i<x;i++)
{
    printf("%d\n",*(q+i));
}
return 0;
}
