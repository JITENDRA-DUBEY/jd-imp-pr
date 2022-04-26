 // program to count total vowel in 2d string
#include<stdio.h>
#include<string.h>
int main()
{
	int i,d,e=0,j=0,count=0;
	char s[2][50];
for(i=0;i<2;i++)
{ printf("plzz enter name\n");
gets(s[i]);
}
printf("vowels strins wise:-\n");
for(i=0;i<2;i++)
     {  count=0;
     	for(j=0;s[i][j];j++)
  	  {
 	 if(s[i][j]=='a'||s[i][j]=='A')
	 count++;
     if(s[i][j]=='e'||s[i][j]=='E')
     count++;
      if(s[i][j]=='i'||s[i][j]=='I')
	 count++;
	 if(s[i][j]=='o'||s[i][j]=='O')
	 count++;
	 if(s[i][j]=='u'||s[i][j]=='U')
	 count++;
	 
     }
	 e=count+e;
	 printf("number of vowels in %d string is=%d\n",i,count);
     
}
	 printf("total number of vowels in all string=%d",e);
return 0;
}


	


	
