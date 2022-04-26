#include<stdio.h>
int main()
{
	int n,i,r,j,a,b;
	printf("PLZZ ENTER a NUMB ");
	scanf("%d",&a);
	for(i=a+1;;i++)
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
