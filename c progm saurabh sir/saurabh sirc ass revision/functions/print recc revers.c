// recurrsevive function to print the cvalue of
#include<stdio.h>
void revn(int n);
int main()
{ int a;
printf("plzz enter a number\n");
scanf("%d",&a);
revn(a);
return 0;
}
void revn(int n)
{
     int r;
  if(n>0)
  { r=n%10;
   printf("%d",r);
    revn(n/10);

  }
}
