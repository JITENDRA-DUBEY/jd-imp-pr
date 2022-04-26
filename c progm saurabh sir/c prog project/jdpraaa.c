#include<stdio.h>
int main()
{
	int n,i,r,j,a,b;
	printf("PLZZ ENTER two NUMB ");
	scanf("%d%d",&a,&b);
	for(i=a+1;i<=b;i++)
    {
        for(j=2;j<=i;j++)
        {
            r=i%j;
            if(r==0)
                break;

        } (i==j)?printf("next prime numb:-%d",j):printf(" ");
        if(j>a)
            break;

    } printf("%next prime numb=%d",j);





	return 0;
	}
