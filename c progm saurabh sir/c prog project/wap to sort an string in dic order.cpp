//program to sort an string in dictionar order
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l,temp;
	char s[50];
	printf("plzzz enter a string:-\n");
	gets(s);
	l=strlen(s);
	printf("string in dic order is:-\n");
	for(i=0;s[i];i++)
	{
		for(j=0;j<=l-1;j++)
		{
			 if(s[i]==32)
			  {
			  	printf("");
			  }
			  else
			 
			 if(s[i]<s[j])
			{ 
		    	temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}printf("%s",s);
	
	return 0;
	
}
