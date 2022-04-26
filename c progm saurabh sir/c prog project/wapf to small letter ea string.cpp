//WAF TO small A STRING ts rn#include<stdio.h>
#include<stdio.h>
void smlet(char s[]);
int main()
{
	char a[50];
	printf("plzz enter a string:-\n");
	gets(a);
	smlet(a);
	return 0;
}
void smlet(char s[])
{
	int i=0;
	for(i;s[i];i++)
	{
		if('A'<=s[i]&&s[i]<='Z')
		s[i]=s[i]+32;
	}
	printf("SMALLIZE STRING:-\n");
	printf("%s",s);
}


