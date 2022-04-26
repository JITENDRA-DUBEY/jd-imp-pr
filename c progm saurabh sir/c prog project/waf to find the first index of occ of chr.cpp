//waf to find index of first occurnce of given char in given string
#include<stdio.h>
void ochins(char s[]);
int main()
{
	char chr;
	int k;
	char a[50];
	printf("plzz enter a string\n");
	gets(a);
	ochins(a);
	return 0;	
}
void ochins(char s[])
{
 int i,count=0;
 char ch;
 printf("plzz enter a char :-\n");
 scanf("%c",&ch);
 for(i=0;s[i];i++)
 {
 	if(ch==s[i])
 	break;
 }
 printf("%c`s occour at first index value is %d in given string",ch,i);
 	
}
