 #include<stdio.h>
 int main()
 {
 int n,i,r;
 printf("plzz enter a numb");
 scanf("%d",&n);

 for(i=2;;i++)
{
r=n+i-1%i;

if(r==0)
break;
}
(i==n)?printf("%d is prime",n):printf("%d is not prime",n);
 return 0;
 }
