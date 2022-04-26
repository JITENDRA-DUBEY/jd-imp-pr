#include<stdio.h>
int sum(int n);
int main()
{
int k,n;
printf("plzz enter last number whose sum be find :-");
scanf("%d",&n);
k=sum(n);
printf("%d",k);
return 0;
}
//int sum(int n)
//{
//int s;
//if(n>0){
    //s=n+sum(n-1);
//return(s);
//}
//}
int sum(int n)
{
int s;
if(n>0)

{s=2*n+sum(n-1);
return(s);

}
}
