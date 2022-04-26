// wap to write  string in file by using fputs(str,fp);
#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char s[100];
 FILE *fp;
 fp=fopen("filew3.txt","w");
 if(fp==NULL)
 {
 printf("file can not open");
 exit(1);
 }
 printf("plzz enter your name\n");
 gets(s);
 fputs(s,fp);
 fclose(fp);
 getch();
 return 0;

}
