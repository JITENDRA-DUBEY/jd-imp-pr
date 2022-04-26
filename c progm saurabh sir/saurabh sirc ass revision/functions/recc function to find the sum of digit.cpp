#include<stdio.h>
int remocod(int );
int main()
{
	int a,s;
	printf("plzz enter a number \n");
	scanf("%d",&a);
  s=remocod(a);
	printf("%d",s);
	return 0;
}
int remocod(int n)
{    
    int sum=0,r,d=0,on,i=0;
    on=n;
   while(on!=0)
   {
   	n/10;
   	d++;
   	
   }
   if(n>0)
    {   while(i!=d){
		r=n%10;
        printf("%d",r);
        remocod(n/10); 
        i++;
    }
    } 	return sum;
}
