// rotate ryt array by 1
#include<stdio.h>
void reverse(int a[],int n);
int main()
{
	int a[5]={1,2,3,5,4};
	int i,j,t;
	// for rotate
    reverse(a,5);
    for(i=0;i<5;i++)
    {
    	printf("%d\n",a[i]);
	}
}
void reverse(int a[],int n)
{   
	int i,t,j;
	for(i=0;i<n/2;i++)
	{  j=n-1-i;
	   t=a[i];
	   a[i]=a[j];
	   a[j]=t;
		
	}
}
