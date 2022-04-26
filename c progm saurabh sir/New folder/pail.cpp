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
        rem=n%10;
        n=n/10;
       //r=pow(rem,d);
        //m=m+r;
        printf("%d",rem);
		}
    (rem==on)?printf("%d is paild NUMBER",on):printf(" %d IS NOT A paild NUMBER",on);
     return 0;
     }


