//string is pail or not by using comparison fir bty last andt sec by last1..
#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,d=1;
    char s[50];
    printf("plzz enter a string:-\n");
    gets(s);
    l=strlen(s);
    char t[50];
    for(i=0;i<l/2;i++)
    {

     if(s[i]!=s[l-1-i])
     break;
    }
    if(i==l/2)
    printf("string is pailidram");
    else
    printf("string is not pailidram");
    return 0;
    }


