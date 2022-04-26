//program to creat file in which take data from stdin and store in file
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
char s[100];
 FILE*fp;
 fp=fopen("file2.txt","w");
 if(fp==NULL)
 {
  printf("FILE CAN`T OPEN");
  exit(1);
 }printf("plzz write your content\n");
 gets(s);
 for(i=0;i<strlen(s);i++)
 {
  putc(s[i],fp);
 }fclose(fp);

getch();

 return 0;

}
