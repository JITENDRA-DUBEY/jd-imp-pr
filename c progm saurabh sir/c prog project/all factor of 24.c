//program to print all factor of given numb;
#include<stdio.h>
int main()
{
    int n=24,i,r;


        for(i=1;i<=24;i++){
        r=n%i;
        if(r==0)
                printf("%d\t",i);
                else
                printf("");
        }
           return 0;
    }
