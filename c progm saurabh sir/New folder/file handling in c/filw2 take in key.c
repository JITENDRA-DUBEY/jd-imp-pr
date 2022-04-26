// wap to write  which take input from keyb in file
#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char s[100];
 FILE *fp;
 fp=fopen("filew2.txt","w");
 if(fp==NULL)
 {
 printf("file can not open");
 exit(1);
 }
 printf("plzz enter your name\n");
 gets(s);
 for(i=0;i<strlen(s);i++)
 {
  fputc(s[i],fp);
 }fclose(fp);
 getch();
 return 0;

}
