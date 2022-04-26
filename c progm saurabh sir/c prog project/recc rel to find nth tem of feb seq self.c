// only to applacble when n>2

#include<stdio.h>
int febn(int n);
int main()
{
    int n,k;
    printf("PLZZ ENTER THE NTH TERM NU:-");
    scanf("%d",&n);
    n=n-2;
    k=febn(n);
    printf("%d",k);
    return 0;
}
int febn(int n)
{   if(n>2){
    int f1=0,f2=1,sum=0,s;
    sum=f1+f2;
    f1=f2;f2=sum;
    s=febn(n-1)+febn(n-2);
    return(s);}
}

