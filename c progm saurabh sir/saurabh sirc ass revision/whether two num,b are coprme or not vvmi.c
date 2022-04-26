#include<stdio.h>
int main(){
int i,a,b;
printf("plzz enter two number");
scanf("%d%d",&a,&b);

for(i=2;i<=a;i++)
{
    if((a%i==0)&&(b%i==0))
        break;
} (i<=a)?printf("not co prime"):printf(" co prime");
}
