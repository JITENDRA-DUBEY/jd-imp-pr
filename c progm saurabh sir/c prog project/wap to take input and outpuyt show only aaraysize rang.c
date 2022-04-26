//to take input but show show output in given range ie array size here space also count as 1 char
#include<stdio.h>
int main()
{ int i;
char s[10];
printf("plzz enter the string:-\n");
gets(s);
printf("the output with in array size of input string:-\n");
//for(i=0;s[i];i++)
//{
//printf("%c",s[i]);
//}
//for print whole input string we use %s trhat is independent of array size
printf("%s",s);
return 0;
}
