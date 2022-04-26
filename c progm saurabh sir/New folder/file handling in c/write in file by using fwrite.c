// wap to write in BINARY file by using FWRITE(add of file;size of file;number record,file pointer);
#include<stdio.h>
#include<string.h>
struct salary
{
 char name[20];
 int ammount;
};
int main()
{
 FILE *fp;
 struct salary p1;
 fp=fopen("filew4.txt","w");
 if(fp==NULL)
 {
 printf("file can not open");
 exit(1);
 }
 printf("plzz enter your name,salary\n");
 fflush(stdin);
gets(p1.name);
scanf("%d",&p1.ammount);
 fwrite(&p1,sizeof(p1),1,fp);
 printf("%s %d",p1.name,p1.ammount);
 fclose(fp);
 getch();
 return 0;

}
