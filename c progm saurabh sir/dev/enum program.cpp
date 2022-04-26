#include<stdio.h>
int main(){

int a,b,c;
printf("plz enter three number");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
	if(b>c)
	printf("%d is greatest",a);
	else
	{
		if(c>a)
		printf("%d is greatest",c);
		else
		printf("%d is greatest",a);}
	
	else 
	if(b>c)
	    if(c>a)
	     printf("%d is greatest",b);
	    else
	    if(a>b)
	     printf("%d is greatest",a);
	     else
	    printf("%d is greatest",b);
	    if(c>b)
 printf(" %d is greatest",c);
	    

return 0;
}

