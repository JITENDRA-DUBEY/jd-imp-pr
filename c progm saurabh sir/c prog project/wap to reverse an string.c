//wap to reverse an string
#include<stdio.h>
int main()
{
 int i,r,j,t,temp;
 char s[]="jai shree ganeshay";
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
    // printf("%c",s[i]);
 }
 printf("%s",s);
 return 0;
}

