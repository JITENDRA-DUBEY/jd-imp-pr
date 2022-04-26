//wap two comapare two string
#include<stdio.h>
int strcpy(char s[],char t[]);
int main()
{
	int k;
	printf("plzz enter first string\n");
	char a[50];
	gets(a);
	printf("plzz enter second string\n");
	char b[50];
	gets(b);
	k=strcpy(a,b);
	if(k==0)
	printf("both are equal\n");
	else
	{
		if(k>0)
		printf("strings are not in dic order and not equal %d\n",k);
		else
		printf("strings are  in dic order and not equal %d\n",k);	
	}
	
}
 int strcpy(char s[],char t[])
 {
 	int i=0,j=0;
 		for(i,j;s[i]&&t[j];i++,j++)
	{
		if(s[i]!=t[i])
		break;
	}  return(s[i]-t[j]);
 }

