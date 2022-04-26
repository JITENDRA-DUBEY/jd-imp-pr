#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0,j,l,t;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[200];
    printf("plzz enter a string:-\n");
    gets(s);
    l=strlen(s);
    //for(i=1;i<=9;i++)
   // {
        int d=0;
    while(i!=10)
    {    t=i+48;
        d=0;
     for(j=0;s[j];j++)
        {
        if(s[j]==t)
        {
           d++;
        }

       }printf("%d ",d);
       i++;
  }



return 0;
}
