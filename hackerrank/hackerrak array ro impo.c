#include<stdio.h>
int main()
{
int n,i,j,k,q;
  //printf("plzz enter total number of ele and rotaion,enter quesry\n");
  scanf("%d%d%d",&n,&k,&q);
  int a[n],b[n],qr[q];
  //printf("plzz eneter array element\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  // dor pr
  for(i=0;i<n;i++)
  {
     // printf("%d",a[(n+i-k)%n]);
     b[i]=a[(n+i-k)%n];
  }
  printf("enter qr\n");
    for(i=0;i<q;i++)
  {
    scanf("%d",&qr[i]);
  }

  for(i=0;i<q;i++)
  {
      for(j=0;j<n;j++)
      {
          if(qr[i]==j)
          {
              printf("%d\n",b[j]);
          }
      }
  }

}
