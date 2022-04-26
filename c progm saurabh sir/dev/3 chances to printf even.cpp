#include<stdio.h>
int main()
{
	int i,x;
	for(i=1;i<=3;i++)
	{
	printf("ENTER A EVEN NUMBER");
	scanf("%d",&x);
	if(x%2==0)
	break ;
    }  
    if(i==4)
    printf("you loos");
    else
    printf("you win");
    return 0;
    
	
	
	
}
