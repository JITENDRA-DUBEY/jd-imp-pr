//wap to check given string is pail or not one logic

//logic->first store giiven string into another string after that comaper one one byy if all element are
//equal then pail otherwise not pail
#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,d;
    char s[50];
    printf("plzz enter a string:-\n");
    gets(s);
    l=strlen(s);
    char t[50];
    for(i=0;s[i];i++)
    {
        t[i]=s[l-1-i];
         d=t[i]-s[i];
         if(t[i]!=s[i])
         break;
    }
    if(d==0)
    printf("string is pailidram");
    else
        printf("string is not pailidram");

     return 0;
}





