//program to creat file in wis we tranfer string data
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
char s[]="JAI SHREE GANESHAY NMAH";
 FILE*fp;
 fp=fopen("file1.txt","w");
 if(fp==NULL)
 {
  printf("FILE CAN`T OPEN");
  exit(1);
 }
 for(i=0;i<strlen(s);i++)
 {
  putc(s[i],fp);
 }fclose(fp);

getch();

 return 0;

}
