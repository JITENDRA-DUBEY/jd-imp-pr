//case insesnestive compariion between two strings
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,d,temp;
	char s[50];
	printf("plzzz enter first string:-\n");
	gets(s);
	char t[50];
	printf("plzzz enter second string:-\n");
	gets(t);
	
	for(i=0; s[i]||t[i];i++)
	{ 
		if('A'<=s[i]&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		} //printf("%s\n",s);
			if('A'<=t[i]&&t[i]<='Z')
		{
			t[i]=t[i]+32;
		}//printf("%s",t);
		d=s[i]-t[i];
		if(s[i]!=t[i])	
	     break;		
	} //printf("%d\n",d);
	if(d==0)
	printf("both string are equal case inses");
	else
		printf("both string are not equal by case ins");
	return 0;
	}

	
