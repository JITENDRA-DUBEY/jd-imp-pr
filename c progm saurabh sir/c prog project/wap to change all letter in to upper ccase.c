//wap to change all letter into upper case
#include<stdio.h>
int main()
{
    int i;
char s[50];
printf("plzz enter a string:-\n");
gets(s);
for(i=0;s[i];i++)
{
if(s[i]>='a'&&s[i]<='z')
s[i]=s[i]-32;
}
printf("upper case string is:-\n");
printf("%s",s);
}

