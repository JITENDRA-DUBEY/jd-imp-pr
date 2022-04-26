// function program 1
#include<stdio.h>
float area(float r);
int main()
{
	float a,c;
	printf("plzz enter radius\n");
	scanf("%f",&a);
	c=area(a);
		printf("area=%f",c);
}
float circum(float r)
{   float A;
	A=3.14*r*r;
    return A;
}


