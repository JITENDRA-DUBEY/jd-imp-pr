// wap functioon to count vowel in given string tsrs
#include<stdio.h>
int vowcount(char s[]);
int main()
{
	int k;
	char a[50];
	printf("plzz enter a string:-\n");
	gets(a);
	k=vowcount(a);
	printf("TOTAL NUMB OF VOWEL=%d",k);
	return 0;
}
 int vowcount(char s[])
 {
 	int i,count=0;
 	for(i=0;s[i];i++)
 	{
 	 if(s[i]=='a'||s[i]=='A')
	 count++;
     if(s[i]=='e'||s[i]=='E')
	 count++;
	 if(s[i]=='i'||s[i]=='I')
	 count++;
	 if(s[i]=='o'||s[i]=='O')
	 count++;
	 if(s[i]=='u'||s[i]=='U')
	 count++;
	 	
	} return(count);
 }

