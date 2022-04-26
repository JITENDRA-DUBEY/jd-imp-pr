#include<stdio.h>
int main()
{
	int n,i,r,j,a;
	printf("PLZZ ENTER A NUMB ");
	scanf("%d",&a);
	for(i=a+1;i<=++a;i++)
    {
        for(j=2;j<=i;j++)
        {
            r=i%j;
            if(r==0)
                break;

         (i==j)?printf("next prime numb:-%d",j):printf(" ");
        }
    } printf("%next prime numb=%d",j);





	return 0;
	}
