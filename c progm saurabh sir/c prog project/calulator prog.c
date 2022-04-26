//simple calculator program
#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter choice number for which operation u want\n");
    printf("1.Addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    scanf("%d\n",&choice);
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    switch(choice)
    {
        case 1 :
        printf("Addition of %d and %d =%d",a,b,a+b);break;
        case 2 :
        printf("substraction of %d and %d =%d",a,b,a-b);break;
        case 3 :
        printf("multiplication of %d and %d =%d",a,b,a*b);break;
        case 4 :
        printf("division of %d and %d =%d",a,b,a/b);break;
        default : printf("Default");
    }
    return 0;
}
