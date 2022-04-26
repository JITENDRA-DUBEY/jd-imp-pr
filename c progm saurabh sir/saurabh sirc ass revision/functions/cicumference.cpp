// function program 1
#include<stdio.h>
float circum(float r);
int main()
{
	float a,c;
	printf("plzz enter radius\n");
	scanf("%f",&a);
	c=circum(a);
		printf("cif=%f",c);
}
float circum(float r)
{   float A;
	A=3.14*r*2;
    return A;
}


