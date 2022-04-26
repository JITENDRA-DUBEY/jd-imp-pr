// wap to check given string is pail or not
#include<stdio.h>
int main()
{
 int i,r,j,t,temp;
 char s[]="abcdcba";
 
 for(i=0;s[i];i++);
 r=i;
 for(i=0;i<=r-1;i++)
 {  
     j=r-1-i;
   if(i<r/2){

     temp=s[i];
     s[i]=s[j];
     s[j]=temp;

     
 }
     printf(" %c",s[i]);
 }
}
