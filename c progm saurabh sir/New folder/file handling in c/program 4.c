// open a file by char by char doubt
#include<stdio.h>
int main()
{
char s[10];
int i;
FILE *fp;
fp=fopen("file1.txt","r");
if(fp==NULL)
{
  printf("file not exist");
  exit(1);
}
while(fgets(s,8,fp)!=NULL)
{
 printf("%s",s);

} fclose(fp);
getch();
return 0;
}
