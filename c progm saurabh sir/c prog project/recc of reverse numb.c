#include<stdio.h>
int reversn(int n);
int main()
{

    int k,n;
    printf("plzz enter a numbr:-");
    scanf("%d/n",&n);
    reversn(n);
   return 0;
}
int reversn(n)
{
    int r,s;
    if(n>0){
      r=n%10;
      printf("%d",r);
     reversn(n/10);
     }


}





