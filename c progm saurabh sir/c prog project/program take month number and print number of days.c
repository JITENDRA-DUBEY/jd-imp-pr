//program take month number and print number of days
#include<stdio.h>
int main()
{
    int x;
    printf("plzz enter month number");
    scanf("%d",&x);
    switch(x)
    {
        case 1: printf("number of days=31");break;
        case 2:printf("number of days=28");break;
        case 3: printf("number of days=31");break;
        case 4: printf("number of days=30");break;
        case 5: printf("number of days=31");break;
        case 6: printf("number of days=30");break;
        case 7: printf("number of days=31");break;
        case 8: printf("number of days=31");break;
        case 9: printf("number of days=30");break;
        case 10: printf("number of days=31");break;
        case 11: printf("number of days=30");break;
        case 12: printf("number of days=31");break;
        default :printf("default");
    }
    getch();
    return 0;
}
