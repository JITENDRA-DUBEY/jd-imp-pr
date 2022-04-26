#include<stdio.h>
int main()
{
    float a,b;
	int choice;
    printf("enter choice number for which operation u want\n");
    printf("1.Addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    scanf("%d",&choice);
    printf("enter the value of a and b\n");
    scanf("%f %f",&a,&b);
    switch(choice)
    {
        case 1 :
        printf("Addition of %f and %f =%f",a,b,a+b);break;
        case 2 :
        printf("substraction of %f and %f =%f",a,b,a-b);break;
        case 3 :
        printf("multiplication of %f and %f =%f",a,b,a*b);break;
        case 4 :
        printf("division of %f and %f =%f",a,b,a/b);break;
        default : printf("Default");
    }
    return 0;
}

