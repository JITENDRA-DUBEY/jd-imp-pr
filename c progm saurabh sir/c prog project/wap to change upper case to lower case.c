//wap to change given string (upper )to lower case
#include<stdio.h>
int main()
{ int i;
char s[]="JAI SHREE GANESHAY NMAH";
for(i=0;s[i];i++)
{
    if(s[i]==32)
        printf(" ");
    else
   printf("%c",s[i]+32);
}
}
