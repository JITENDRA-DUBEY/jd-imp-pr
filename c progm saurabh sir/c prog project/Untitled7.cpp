// wap to check given string is pail or not
#include<stdio.h>
#include<string.h>

	int main()
	{   int d,j,i,k;
		char s[]="babcdcba";
		d=strlen(s);
		printf("%d\n",d);
		char b[50];
		for(i=0;s[i];i++)
		{ 
			
		     j=d-1-i;
		     if(j>=0)
		     {
		     b[i]=s[j];
		     }
		}
		printf("%s",b);
		k=strcmp(s,b);
		printf("%d",k);
		
	}

