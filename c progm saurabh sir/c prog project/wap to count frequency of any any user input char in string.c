//wap to function to count the occurence of a given char in given string
#include<stdio.h>
void frqchr( int b[]);
int main()
{ int chr;
    char s[50];
    printf("plzz write a string:-\n");
    gets(s);//to take input string
     printf("plzz enter a char:-\n");
    scanf("%c",&chr);
    frqchr(s);
    return 0;
    }
    void frqchr(int b[])
    {  int i,chr,count=0;

    for(i=0;b[i];i++)
    {
        if(chr==b[i])
          count++;

    }
    if(count>=1)
    printf("%c is occour at %d times in given string ",chr,count);
   //else
       // printf(" nosuch char present in given array");
  }

