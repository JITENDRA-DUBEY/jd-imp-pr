#include<stdio.h>
int main()
{int x,y,z;
printf("plzz enter the value of x,y,z");
scanf("%d%d%d",x,y,z);
if(x>y)
{
if(y>z)
printf("%dis greatest",x);
else
{
if(z>x)
printf("%d is greatest",&z);

else
printf("%d is greatest,&y");
}
return 0;

}
