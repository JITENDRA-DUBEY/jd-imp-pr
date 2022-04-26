// waf to count words in a string ie number of space+1 jit kum=space+1=2 word#include<stdio.h>
#include<stdio.h>
int numwrd(char s[]);
int main()
{
	int k;
	char a[50];
	printf("plzz enter a string:-\n");
	gets(a);
	k=numwrd(a);
	printf("total number of words in given string=%d",k);
	return 0;
}
int numwrd(char s[])
{
	int i,count=1;
for(i=0;s[i];i++)
    {
	if(s[i]==32)//space
	count++;
	}
	return (count);	
}
