//program to take any character and check it is char ,alpha ,spc tsrn
#include<stdio.h>
void charcheck(char b);
int main()
{
char ch;
 printf("enter a character");
 scanf("%c",&ch);
charcheck(ch);
return 0;
}
void charcheck(char b)
{
 if( (b>='a' && b<='z') || (b>='A' && b<='Z'))
    printf(" input is Alphabetic number");
 else
    if(b>='0'&&b<='9')
    printf("input is numeric");
    else
        printf("input is special char");

}
