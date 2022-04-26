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
    int i,j,n,count=0;
    scanf("%d",&n);
    fflush(stdin);
    char s[100];
    char ch;
   // printf("plzz nenter a string\n");
    gets(s);
    fflush(stdin);
    if(n<6)
    {
       printf("%d",(6-n));
    }
    else
    { int h=0,e=0,f=0,g=0,d=0;
      for(i=0;i<strlen(s);i++)
      {   ch=s[i];
          for(j=0;j<strlen(s);j++)
          {
              if('a'<=ch&&ch<='z')
              e++;
              if('A'<=ch&&ch<='Z')
              f++;
              if('0'<=ch&&ch<='9')
              g++;
              if(ch=='!'||ch=='@'||ch=='#'||ch=='%'||ch=='^'||ch=='&'||ch=='$'||ch=='*'||ch=='('||ch==')'||ch=='-'||ch=='+')
            h++;
          }
        }
      if(e==0)
      d++;
      if(f==0)
      d++;
      if(g==0)
      d++;
      if(h==0)
     {
       d++;
     }
     printf("%d",d);
    }

    return 0;
}

