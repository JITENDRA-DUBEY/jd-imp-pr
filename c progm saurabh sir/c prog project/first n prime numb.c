 #include<stdio.h>
int main()
{
	int n,i,d=1,r,j,a,b;
	printf("PLZZ ENTER a NUMB ");
	scanf("%d",&n);
     while(d<=n){
	for(i=2;;i++)
    {

        for(j=2;j<=i;j++)
        {
            r=i%j;
            if(r==0)
                break;

        } (i==j)?printf("next prime numb:-%d",j):printf(" ");


        d++;

        }



    }






	return 0;
	}
