// program to adddtion of two matxi is
//wap to print 3*3 matrix
#include<stdio.h>
int main()
{
int i,j;
int a[3][3];
printf("plzz enter the enter the elements of first matrix:-\n");
 for(i=0;i<=2;i++)
 {  for(j=0;j<=2;j++)
      {
          scanf("%d",&a[i][j]);
      }
 }
 int b[3][3];
printf("plzz enter the enter the elements of second  matrix:-\n");
 for(i=0;i<=2;i++)
 {  for(j=0;j<=2;j++)
      {
          scanf("%d",&b[i][j]);
      }
 }
 printf("sum matrix is:-\n");
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
        {printf("%d \t",a[i][j]+b[i][j]);
        } printf("\n");
  }
 return 0;
 }


