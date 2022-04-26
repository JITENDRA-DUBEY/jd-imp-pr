#include<stdio.h>
int main()
{
	int i,j,n,sd=0,sr=0;
//	printf("plzz enter the size of square matrix\n");
//	scanf("%d",&n);
	int a[3][3];
	//for pd ele
	printf("plzz enter elememnts");
	 for(i=0;i<=2;i++)
      {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			sd=sd+a[i][j];
		}
	}printf("sum of pd=%d\n",sd);
	//sum of reverse diag
	for(i=0;i<=2;i++)
	{
		for(j=2;j>=0;j--)
		{
			if(j==2-i)
			sr=sr+a[i][j];
		}
	}printf("sum of rpd=%d",sr);
}
