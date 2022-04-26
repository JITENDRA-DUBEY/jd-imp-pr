//jsg sort 4 cityy name in dictionary oreder
#include<stdio.h>
#include<string.h>
int main()
{ int i,j;
char t[15];
 char a[][15]={"Bhopal","agra","Kashmir","BIhar"};
 //sort
 for(i=0;i<4;i++)
 {
  for(j=i+1;j<4;j++)
   {
    if(strcmp(a[i],a[j])>0)
    {
      strcpy(t,a[i]);
      strcpy(a[i],a[j]);
      strcpy(a[j],t);
    }

   }
 }
   for(i=0;i<4;i++)
   {
    printf("%s\n",a[i]);
   }
 }

