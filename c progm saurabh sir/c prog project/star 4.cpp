#include<stdio.h>
int main()
{
    int i,j,space=1;
    for(i=1;i<=4;i++)
    {
        for(space;space<=(4-i);space++)
        {
            printf("");
        }
        for(j=1;j<=(2*i-1);j++)
		{
            printf("*");
        }printf("\n");
    }
    
    
    return 0;
}

