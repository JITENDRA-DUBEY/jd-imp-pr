// write a function to swap two numb
#include<stdio.h>
void swap(int *n,int *m);
int main()
{
 int a,b;
 printf("Plzz enter two number\n");
 scanf("%d%d",&a,&b);
 swap(&a,&b);
 printf("a=%d,b=%d",a,b);
}
void swap(int *n,int *m)
{
 int temp;
 temp=*n;
 *n=*m;
 *m=temp;
}
