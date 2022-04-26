#include<stdio.h>
int main(){
	int i=1,m;
	printf("enter the value last number");
	scanf("%d",&m);
	while(m>=i){
    m=m*m;
		//i++;
	printf("%d\n",m);
	m--;
}
	return 0;
}
