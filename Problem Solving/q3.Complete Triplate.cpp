#include<stdio.h>
int main()
{
    int i,j,ad=0,bd=0,ae=0,be=0;
    int a[3],b[3];
    for(i=0;i<=2;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<=2;i++)
    {
    scanf("%d",&b[i]);
    }
    for(i=0;i<=2;i++)
    {      
       if(a[i]>b[i])
          {
          ad++;
          }
         else
         { if(b[i]>a[i])
            {    bd++;
            }
            else
            printf("");
         }
          
        }  printf("%d %d",ad,bd);   
          
    
    return 0;
    
}

