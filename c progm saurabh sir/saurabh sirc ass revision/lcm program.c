//lcm of two number
#include<stdio.h>
int main(){
int i,j,a,b,lcm=1,count=0;
printf("plzz enter two number");
scanf("%d%d",&a,&b);
{
  for(i=1;;i++)
  {
    if((a%i==0)||(b%i==0))
    {
      lcm=lcm*i;
      count++;
    }if(count>=a&&count>=b)
    break;
  }printf("%d",lcm);
}
}
