#include<stdio.h>
void entwo(int ,int);
int main()
{
 int a,b,k;
 char ch;
 scanf("%c",&ch);
 while(1)
 {

    system("cls");
     printf("1.for add\n");
   printf("2.for sub\n");
   printf("3.for mult\n");
   printf("4.for div\n");
   printf("5.for exit");
   printf("enter your choice\n");
   scanf("%d",&k);
   switch(k)
   {
     case 1:system("cls");
          printf("plzz enter two number\n");
             scanf("%d%d",&a,&b);
        printf("%d",a+b);
        sleep(1);
     break;
     case 2:
         printf("plzz enter two number\n");
             scanf("%d%d",&a,&b);
          printf("%d",a-b);
          sleep(5);
          break;
     case 3:system("cls");
          printf("plzz enter two number\n");
             scanf("%d%d",&a,&b);
         printf("%d",a*b);
         sleep(5);
          break;
     case 4:system("cls");
          printf("plzz enter two number\n");
             scanf("%d%d",&a,&b);
         printf("%d",a/b);
         sleep(5);
          break;
     case 5:
         system("cls");
          exit(1);
          sleep(5);
     default : printf("plzz slect ryt choice");

   }printf("do you want more then press y or n ");
     if(ch=='n'||ch=='N')
        break;
 }

 printf("exit");
}
