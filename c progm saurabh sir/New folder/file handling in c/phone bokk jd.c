// JSG
// phone book application
#include<stdio.h>
#include<string.h>
typedef struct phonebook phone;
struct phonebook
{
    char fn[30];
    char ln[20];
    char num[10];
};
int main()
{
    int i,n,d=0;

printf("             PHONEBOOK APLLICATION               \n");
printf("*********************************************************************\n");
printf("1.press1 to save contact in phone book.\n");
printf("2.press2 to delete a record.\n");
printf("3.press3 to show contact number.\n");
printf("4.press4 to search a record.\n");
printf("5.press5 to exit.\n");
printf("*********************************************************************\n");
printf("\n");
printf("ENTER YOUR CHOICE:-\n");
scanf("%d",&n);
switch(n)
{
case 1:
    {
         int m;
       printf("*********************************************************************\n");
         printf("          YOUR  DETAILS WHICH IS SAVED IN PHONEBOK        \n");

         printf("*********************************************************************\n");
         printf("plzz enter your first name\n");
        for(i=0;i<100;i++)
       {
                phone i;

       fflush(stdin);
        gets(i.fn);
          printf("plzz enter your last name\n");
       fflush(stdin);
        gets(i.ln);
          printf("plzz enter your number\n");
       fflush(stdin);
        gets(i.num);
        printf("do you want to save more press 1or0\n");
        scanf("%d",&m);
        d++;
        if(m==0)
        {break;
        }
    }
  }

    printf("enter your choice\n");
    scanf("%d\n",&n);
    if(n==3)
    {
    case 3:
    {   fflush(stdin);
             printf("*********************************************************************\n");
         printf("          YOUR DETAILS WHICH IN PHONEBOK        \n");

         printf("*********************************************************************\n");
        for(i=0;i<d;i++)
        {
                phone i;
         printf("details\n");
         printf("%s     %s       %s\n",i.fn,i.ln,i.num);
        } break;
     }
}
}
return 0;
}




