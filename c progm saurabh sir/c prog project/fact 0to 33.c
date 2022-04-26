#include<stdio.h>
//factroial upto 33
int main(){
int n,i=1,fact=1;

printf("please press any key");
scanf("%d",&n);
if(n>0){
for(i;i<=n;i++){
fact=fact*i;
}
printf("fact=%d",fact);}
else
    printf("fact of negative numb not exist");

return 0;
}


