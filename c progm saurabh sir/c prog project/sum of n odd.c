#include<stdio.h>
int main(){
int a,i=0,n;
printf("enter  numb");
scanf("%d",&a);
while(a!=0)
{

    a=a/10;
    i++;
}
printf("%d",i);

return 0;
}
