 #include<stdio.h>
 int main()
 {
 int n,i,r;
 printf("plzz enter a numb");
 scanf("%d",&n);
 for(i=2;i<=n-1;i++)
{
r=n%i;
if(r==0)
break;
if(i%2==0)
printf("");
else
printf("%d",i);

}
(i==n)?printf("%d is prime",n):printf("%d is not prime",n);
 return 0;
 }
