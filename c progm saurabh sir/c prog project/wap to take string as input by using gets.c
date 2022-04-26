//program to take complete input or mutiwords string by gets in place of scanf
#include<stdio.h>
int main()
{ int i;
char s[10];
printf("plzz enter the string:-\n");
gets(s);
printf("the output of input string:-\n");
printf("%s",s);
return 0;
}
