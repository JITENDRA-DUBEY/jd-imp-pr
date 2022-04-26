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
{  int l,i,j,cm=65,dm=97,e=0;
    char s[1000];
    gets(s);

    for(i=0;i<=25;i++)
    {   cm=65+i;
        dm=97+i;
        for(j=0;s[j];j++)
       {      e=0;
        if((s[j]==cm)||(s[j]==dm))
        {
            e++;
          if(e>=1)
          break;
        }
        }
         if(e==0)
            break;
    }
   if(e==0)
    printf("not pangram\n");
    else {
    printf("pangram");
    }
  }






