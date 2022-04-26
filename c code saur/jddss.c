// print the desire sequence
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,d;
char s[1000] ="geeksforgeeks";
char t[strlen(s)];
for(i=0;s[i];i++)
{  d=0;
for(j=0;s[j];j++)
 {
 if(s[i]==s[j])
   d++;
 }//printf("%d",d);
 if(d>=2)

    printf("%c",s[i]);
 else
    printf("");
}
return 0;
}

