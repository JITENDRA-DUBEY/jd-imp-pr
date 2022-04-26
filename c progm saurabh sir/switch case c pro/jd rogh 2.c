#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct phone
{
    char name[30];
     int a;
};
void display(struct phone *p);
void save(struct phone *q);
int main()
{  struct phone ph[100];
   struct phone *p;
   p=ph;
   int k,m;
   save(ph);
   display(ph);
   return 0;
}
 void save(struct phone *q)
{  int i,j;
      char chh;
      for(i=0;i<3;i++)
      {

        printf("plzz enter the data of %d person\n",i+1);
        printf("plzz enter name :\n");
        fflush(stdin);
        gets((q+i)->name);
        fflush(stdin);
        printf("plzz enter your phone number\n");
        fflush(stdin);
        scanf("%d",&(q+i)->a);
        printf("do you to want to save more than press y or n\n");
        fflush(stdin);
        scanf("%c",&chh);
        if(chh!='y')
         break;
      }
}
void display(struct phone *p)
{  printf("*******************************************\n");
    int i;
    for(i=0;i<3;i++)
    {
       printf("Data of %d person is :-\n",i+1);
       printf("Name:- %s   \n",(p+i)->name);
       printf("Moblie numer:- %d \n",(p+i)->a);

    }

}
