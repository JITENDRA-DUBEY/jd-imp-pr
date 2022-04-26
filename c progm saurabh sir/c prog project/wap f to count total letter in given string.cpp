// wap to count total number of word
#include<stdio.h>
int numwrd(char s[]);
int main()
{
	int k;
	char a[50];
	printf("plzz enter a string:-\n");
	gets(a);
	k=numwrd(a);
	printf("total number of letter in given string=%d",k);
	return 0;
}
int numwrd(char s[])
{
	int i,count=0;
for(i=0;s[i];i++)
    {
	count++;
	}
	return (count);	
}
