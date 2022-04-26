#include<stdio.h>
#include<string.h>
int main()
{
int l;
char s[]="jitendra";
char(*p)[];
p=&s;
printf( "%d",strlen(*p));
}
