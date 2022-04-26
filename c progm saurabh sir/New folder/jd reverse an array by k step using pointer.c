#include<stdio.h>
void main(){ int n,k;
printf("plzz enter the size of an array anf the value of k");
scanf("%d%d",&n,&k);
int a[n],b[n],i;
int *p=a,*q=b;
printf("Enter element in array \n");
for(i=0;i<n;i++){
    scanf("%d",(p+i));
}
for(i=0;i<k;i++)
{
*(q+i)=*(p+n-k+i);
}
for(i=k;i<n;i++){
  *(q+i)=*(p+i-k);
}
for(i=0;i<n;i++){
printf("%d",*(q+i));
}
return 0;
}
