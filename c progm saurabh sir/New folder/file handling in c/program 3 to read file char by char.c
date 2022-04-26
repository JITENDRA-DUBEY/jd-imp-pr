// open a file by char by char doubt
#include<stdio.h>
int main()
{
char ch;
int i;
FILE *fp;
fp=fopen("file2.txt","r");
if(fp==NULL)
{
  printf("file not exist");
  exit(1);
}
//fgetc(fp);
while(!feof(fp))
{
ch=fgetc(fp);
 printf("%c",ch);	
 
  
 
 
} fclose(fp);
getch();
return 0;
}
