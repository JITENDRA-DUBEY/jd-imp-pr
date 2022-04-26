//program to print all prime number between two number a<b
#include<stdio.h>
int main()
{
    int a,b,i,j,r;
    printf("plzz enter boundary numb");
    scanf("%d%d",&a,&b);
   // printf("prime number between%d and%d\n",a,b);
    for(i=a+1;i<=b-1;i++)
    {
        for(j=2;j<=i;j++)
        {

            r=i%j;
            if(r==0)
                break;
        }
        (j==i)?printf("%d\t",j):printf("");
    }
    return 0;
}

