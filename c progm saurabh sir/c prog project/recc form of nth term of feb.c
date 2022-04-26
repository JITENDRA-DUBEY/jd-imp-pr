#include<stdio.h>
int febn(int n);
int main()
{
    int n,k;
    printf("PLZZ ENTER THE NTH TERM NU:-");
    scanf("%d",&n);
    k=febn(n);
    printf("%d",k);
    return 0;
}
int febn(int n)
{ int s;
   if(n==1)
      return 0;
    if(n==2)
      return 1;
    s=febn(n-1)+febn(n-2);
    return(s);
}
