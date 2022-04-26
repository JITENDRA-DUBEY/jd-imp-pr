//mars hacker rank probl
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
{
    int i=0,j,d=0,l,f;
    char s[]="SOS";
    fflush(stdin);
    char t[100];
   // printf("plzz enter a string\n");
    gets(t);
    l=strlen(t);
    f=l/3;
    for(j=0;t[j];j++)
    {
        if(s[i]==t[j])
        {
            if((s[i+1]==t[j+1])&&(s[i+2]==t[j+2]))
            d++;
        }
    }//printf("number of same pattern=%d",d);
    if(d<l/3)
    {
     printf("%d",(l/3)-d);
    }
    else
        printf("0");

}
