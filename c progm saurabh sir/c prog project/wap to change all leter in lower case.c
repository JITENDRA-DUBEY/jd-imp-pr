//wap to change in lower chase
#include<stdio.h>
int main()
{
    int i;
char s[50];
printf("plzz enter a string:-\n");
gets(s);
for(i=0;s[i];i++)
{
if(s[i]>='A'&&s[i]<='Z')
s[i]=s[i]+32;
}
printf("lower case string is:-\n");
printf("%s",s);
}
