#include<stdio.h>
void nat(int n);
int main()
{ int n;
printf("enter the last naturl numb");
scanf("%d",&n);
nat(n);
return 0;
}
 void nat(int n)
 {
 if(n>0){

 printf("%d\n",2*n);
 nat(n-1);
 }
 }
