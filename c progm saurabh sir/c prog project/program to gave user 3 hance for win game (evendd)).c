//program to gave user 3 chance for win game (even/odd))
#include<stdio.h>
int main()
{
    int a,i;
    for(i=1;i<=3;i++)
    {
        printf("enter  even numb");
        scanf("%d",&a);
        if(a%2==0)
            break;
    }
    (i==4)?printf("you lose"):printf("you win");
    return 0;
}

