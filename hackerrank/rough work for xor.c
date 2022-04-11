#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n,int k);

  //Write your code here.

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
void calculate_the_maximum(int n,int k)
{
    int i,j,m=0,p=0,a[10],b[10],count=0,max;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            a[m]=i^j;
            m++;
        }
    }
    for(i=0;i<10;i++)
    {
       printf("%d\n",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]<=k-1)
          {
            b[p]=a[i];
            p++;
            count++;
          }
    }
    if(count>=1)
    {
        //find max value
        max=b[0];
        for(j=0;j<count;j++)
        {
            if(b[j]>max)
                max=b[j];
        }printf("last %d\n",max);
    }
    else
    {printf("0\n");}

}

