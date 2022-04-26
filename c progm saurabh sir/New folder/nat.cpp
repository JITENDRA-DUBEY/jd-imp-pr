#include<stdio.h>
int main(){

int n,i=1,
long long fact=1;
printf("plzz enter last numb");
scanf("%d",&n);
for(i;i<=n;i++){
fact=fact*i;
}
printf("%llu\n",fact);
}
