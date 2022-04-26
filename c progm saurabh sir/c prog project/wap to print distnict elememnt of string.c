// program to print dis char in given string
#include<stdio.h>
void dischr(char b[]);
int main()
{
char s[50];
printf("plzz enter a string:-\n");
gets(s);
dischr(s);
return 0;
}
void dischr(char b[])
{
int i,j;
printf("all distnict element:-\n");
for(i=0;b[i];i++)
{
  for(j=0;j<i;j++)
  {
   if(b[i]==b[j])
   break ;
  }
  if(b[i]==' ')
    printf("");
 if(i==j)
 printf("%c\t",b[i]);
}
}
