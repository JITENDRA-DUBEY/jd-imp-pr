//camelcase ps
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main()
{   int count=1,i;
	char s[10000];
	gets(s);
	for(i=0;s[i];i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			count++;
		}
		
	}printf("%d",count);
	
}
