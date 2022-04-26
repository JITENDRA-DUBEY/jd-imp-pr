// program to check given numb is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
    int n=153,i,r,d=3,m=0,rem,on;
        on=n;
        for(i=1;i<=d;i++){
        rem=on%10;
        on=on/10;
        r=pow(rem,d);
        m=m+r;
    }
    (m==n)?printf("%d is ARMSTRONG NUMBER",m):printf(" %d IS NOT A ARMSTRONG NUMBER",m);
    return 0;
}
