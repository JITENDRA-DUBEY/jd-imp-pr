//wap to count occurence of a given char in given string
#include<stdio.h>
int main()
{   int i,chr,count=0;
    char s[50];
    printf("plzz write a string:-\n");
    gets(s);//to take input string
    printf("plzz enter a char:-\n");
    scanf("%c",&chr);
    for(i=0;s[i];i++)
    {
        if(chr==s[i])
          {count++;}

    }
    if(count>=1)
    printf("%c is occour at %d times in given string ",chr,count);
   else
        printf(" nosuch char present in given array");
}
