//mars hacker rank probl by

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
    int i=0,j,d=0,l;
    char t[100];
    printf("plzz enter a string\n");
    gets(t);
    l=strlen(t);
    char s[]="SOSSOSSOSSOSSOS";

   // printf("%s",s);
   for(i=0;t[i];i++)
   {
       if(t[i]!=s[i])
        d++;
   }
   printf("dis el \n");
   if(d==0)
   {
       printf("0");

   }else
   printf("%d",d);
}




