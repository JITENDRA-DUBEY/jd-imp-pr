//WAF TO CAPITILAIZE A STRING ts rn#include<stdio.h>
#include<stdio.h>
void caplet(char s[]);
int main()
{
	char a[50];
	printf("plzz enter a string:-\n");
	gets(a);
	caplet(a);
	return 0;
}
void caplet(char s[])
{
	int i=0;
	for(i;s[i];i++)
	{
		if('a'<=s[i]&&s[i]<='z')
		s[i]=s[i]-32;
	}
	printf("CAPILTALIZE STRING:-\n");
	printf("%s",s);
}


