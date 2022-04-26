//covetrt given array into uper case
//a=97,A=65,dif=32
#include<stdio.h>
int main()
{ int i;
 char s[]="jai shree ganeshay nmah";
 for(i=0;s[i];i++)
 {


  printf("%c",s[i]-32);
 }
 return 0;
}
