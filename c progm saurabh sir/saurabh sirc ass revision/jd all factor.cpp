// find lcm
#include<stdio.h>
int main()
{
	int i,r,j,n;
	printf("plzz enbter a number");
	scanf("%d",&n);
	printf("prime factor of %d are:-\n",n) ;
	for(i=1;i<=n;i++)
	{
	  if(n%i==0){
	  
	  //printf("%d\n",i);
	  for(j=2;j<=i;j++)
	  {
		r=i%j;
		if(r==0)
		break;
	  } if(i==j)
	  printf("%d\t",j);}
}
}
	
	
	
