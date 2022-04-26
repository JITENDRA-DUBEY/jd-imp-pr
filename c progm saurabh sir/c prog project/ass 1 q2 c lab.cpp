// program to read max 20 char
#include<stdio.h>
int main()
{
int i,x;
char str[100];
printf("plzz write a stream:-\n");
gets(str);
printf(" output:-\n");
 for(i=0;i<=19;i++)
 {
 printf("%c",str[i]);
}
return 0;
}
