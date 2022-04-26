// wap to write  char  in file
#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char s[]="my name is jitendra kumar dubey";
 FILE *fp;
 fp=fopen("filew1.txt","w");
 if(fp==NULL)
 {
 printf("file can not open");
 exit(1);
 }
 for(i=0;i<strlen(s);i++)
 {
  fputc(s[i],fp);
 }fclose(fp);
 getch();
 return 0;

}
