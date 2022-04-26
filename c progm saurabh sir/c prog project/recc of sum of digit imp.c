#include<stdio.h>
int sud(int n);
int main()
{

    int k,n;
    printf("plzz enter a numbr:-");
    scanf("%d/n",&n);
    k=sud(n);
    printf("%d",k);
    return 0;
}
int sud(n)
{
    int r,s;
    if(n>0){
      r=n%10;
     s=r+sud(n/10);
     return(s);}


}





