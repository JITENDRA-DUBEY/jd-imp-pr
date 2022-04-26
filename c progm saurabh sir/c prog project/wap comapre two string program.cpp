//wap to compare two string
#include<stdio.h>
int main()
{   int i=0,j=0,k,d;
	char s[]="jitendra";
	char t[]="jitendr ";
	for(i,j;s[i]&&t[j];i++,j++)
	{
		if(s[i]!=t[i])
		break;
	}
		d=s[i]-t[j];
	if(d==0)
	printf("both are equal");
	else
	{
	if(d>0)
	printf("both are not in dictionary order not equal");
	else
	printf("both are in dictionary order but not equal");
}
	return 0;
	

}
