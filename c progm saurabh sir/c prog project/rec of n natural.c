#include<stdio.h>
void nat(int n);
int main()
{
    int n;
  printf("plzz enter the value of n");
   scanf("%d",&n);
    nat(n);

    return 0;
}
  void nat(int n)
  {
      if(n>0)
       {
       nat(n-1);
      printf("%d",n);
  }
  }
