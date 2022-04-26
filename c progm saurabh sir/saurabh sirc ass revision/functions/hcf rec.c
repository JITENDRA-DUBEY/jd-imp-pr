// write a recurrsive function tha caluclate the hcf
#include<stdio.h>
int hcf(int n,int m);
int main()
{ int a,b,c;
printf("plzz enter two  number\n");
scanf("%d%d",&a,&b);
 c=hcf(a,b);
 printf("%d",c);
return 0;
}
int hcf(int n,int m)
{int i=1,hc=1;
 if(n>0&&m>0)
 {

   if(n%i==0&&m%i==0)
   {
    hc=hc*i;
   }
   hcf(n/i,m/i);
   i++;
 }return hc;
}
