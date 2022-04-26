//waf to check given string is alpha num or not
#include<stdio.h>
#include<string.h>
void alfnstr(char s[]);
int main()
{
	char a[50];
	printf("plzz enter a string:-\n");
	gets(a);
	alfnstr(a);
	return 0;
}
void alfnstr(char s[])
{
	int i,l;
	l=strlen(s);
	printf("%d\n",l);
	
	for(i=0;s[i];i++)
	{
		if('a'<=s[i]||s[i]>='z')
		continue;
    	if('A'<=s[i]||s[i]>='Z')
		continue;
		if('0'<=s[i]||s[i]>='9')
		continue;
		if(s[i])
	}
	(i==l)?printf("given string is alphanum"):printf("given string is not alphanum");
}
