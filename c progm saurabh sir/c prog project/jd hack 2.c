
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    printf("plzz enter 4 numb:-\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);}
    int max(int x,int y)
       {
           if(x>y)
            return x;
           else
            return y;
       }
   int max_of_four(int a,int b,int c,int d)
   {  int e,f,g;
       e=max(a,b);
       f=max(e,c);
       g=max(f,d);
       return g;
   }


