//wap a program to count vowel in each string and also print total of all vowel in last
#include<stdio.h>
int main()
{
int i,d=0,r,count,e=0;
char s[8][20];
for(d=0;d<=7;d++)
{ r=d+1;
printf("plzz enter %d string:-\n",r);
gets(s[d]);
}
printf("number of vowels string wise:-\n");
   for(d=0;d<=7;d++)
   {
     for(i=0;d<=7&&i<=20;i++)
 	{  count=0;
 	 if(s[d][i]=='a'||s[d][i]=='A')
	 count++;
     if(s[d][i]=='e'||s[d][i]=='E')
	 count++;
	 if(s[d][i]=='i'||s[d][i]=='I')
	 count++;
	 if(s[d][i]=='o'||s[d][i]=='O')
	 count++;
	 if(s[d][i]=='u'||s[d][i]=='U')
	 count++;
	 }printf("number of vowels in %d string is=%d\n",r,count);
	 e=count+e;
}
printf("total number of vowels in all string=%d",e);

return 0;
}
