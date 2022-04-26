//write a function to count occurence of given char in given string ts rn
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
 	count++;
 }
 printf("%c is occour at %d times in given string",ch,count);
 	
}

