// jai shree ganeshay
//phone book project;
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct phone
{
    char name[30];
     int a;
};
void disply(struct phone *p);
void save(struct phone *q);
int main()
{  struct phone ph[100];
   struct phone *p;
   p=&ph;
    int k,m;
    static int count =0;

     while(1)
     {
        system("cls");
        printf("      PHONE BOOK         \n ");
        printf("******************************************\n");
        printf("1.SAVE CONTACT DETAILS:-\n");
        printf("2.DISPLAY YOUR CONTACT:-\n");
        printf("3.EXIT:-\n");
        printf("******************************************\n");
        printf("plzz enter your choice:-\n");
        scanf("%d",&k);
        printf("******************************************\n");
        switch(k)
        {
        case 1:
             {char chh;
              int i;
              for(i=count;i<=100;i++)
               {
                save(&ph[i]);
                count++;
                fflush(stdin);
                scanf("%c",&chh);
                if(chh!='y')
                 {

                  break;

                  }
                }
             }//printf("value of count=%d",count);
            break;
         case 2:
              printf("the value of count=%d\n",count);
            //count is an static varaiable so it will accesable and updatble by nay functio
            {    int i;
              //printf("*******************************************\n");
                for(i=0;i<count;i++)
               {
                printf("Data of %d person is :-\n",i+1);
                disply(&ph[i]);
                }
            }
             break;

          case 3:
          printf("thanku for using my application\n");
             exit(1);
        }


            printf("plzz enter any key for main menu\n");

            getch();
     }

      return 0;
}


void save(struct phone *q )
{        int j;

        printf("plzz enter the data of  person\n");
        printf("plzz enter name :\n");
        fflush(stdin);
        gets(q->name);
        fflush(stdin);
        printf("plzz enter your phone number\n");
        //for(j=0;j<10;j++)
       // {
           // scanf("%d",&(q+i)->a[j]);
        //}
        fflush(stdin);
        scanf("%d",&q->a);
        printf("do you to want to save more than press y or n\n");

}
void disply(struct phone *p)
{

       printf("Name:- %s   \n",p->name);
       printf("Moblie numer:- %d \n",p->a);

}


