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

// jsg
int main()
{
    int n,i,area,e=0,d=0;
    int a[26];char s[11];
    printf("plzz enter hegight of albabetic letter\n");
    for(i=0;i<26;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("plzz enter your word\n");
    fflush(stdin);
    gets(s);
    //for hacker rank we use scanf("%s",s);
    // printf("%s",s);
   // printf("\nstrlemn =%d",strlen(s));
   for(i=0;i<strlen(s);i++)
   {

       if(a[s[i]-97]>e)
       {
           e=a[s[i]-97];

       }

   }printf("e=%d",e*strlen(s));

}
