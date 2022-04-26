//write a function to compare two string
#include<stdio.h>
int strcpy(char a[],char b[]);
int main()
{ int k;
printf("plzz enter a first string:-\n");
char s[50];
gets(s);
printf("plzz enter second string:-\n");
char t[50];
gets(t);
k=strcpy(s,t);
if(k==0)
printf("both string are equal\n");
else
if(k>0)
printf("both string are not in dictionary order\n");
else
printf("both string are in dictionary order\n");
return 0;
}
int strcpy(char a[],char b[])
{
int i=0,j=0;
for(i=0,j=0;a[i]==b[j];i++,j++)
{
  return 0;}
 return(a[i]-b[j]);

}


