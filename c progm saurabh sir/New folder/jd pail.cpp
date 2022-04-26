#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,r,d=0,m=0,rem,on;
    printf("plzz enter a numb");
    scanf("%d",&n);
    on=n;
        while(n!=0)
           {

        n=n/10;
        d++;}
        n=on;
        for(i=1;i<=d;i++){
        rem=on%10;
        on=on/10;
        //r=pow(rem,d);
        //m=m+r;}
        printf("%d",rem);
        } printf("%d",rem);
//(on==rem)?printf("%d is ARMSTRONG NUMBER",rem):printf(" %d IS NOT A ARMSTRONG NUMBER",rem);
     return 0;
     }


