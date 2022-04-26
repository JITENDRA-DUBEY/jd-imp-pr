// hacker rank biwise
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following functio
int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
void calculate_the_maximum(int n, int k) {
    int a,b,i,j,arr[1000];
    for(a=1;a<n;a++)
    {
        for(j=a+1;j<=n;j++)
        {
            b=j;
           arr[1000]=a&b;

        }
        maxarr(a,1000);

    }       void maxarr(int b[],int m)

      {
          int i,max;
          max=b[0];
            for(i=1;i<=m-1;i++)
            {
                if(b[i]>max)
                   {
                      max=b[i];
                   }
            if(max>=m)
                printf("%d",max-1);
            else
                printf("0");
            }



