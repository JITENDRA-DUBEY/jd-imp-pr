#include<string.h>
#include<stdio.h>
#include<stdlib.h>
static int count =0;
struct phone
{
    char name[30];
     int a;
};
int main()
{    int i,pos;
    struct phone ph[3];
   struct phone *p;
    p=&ph;
    for(i=0;i<3;i++)
    {
       printf("enter your name\n");
       gets((p+i)->name);
       printf("enter your num\n");
        fflush(stdin);
        scanf("%d",&(p+i)->a);
    }
    printf("plzz enter which postion number u want to delete\n");
     scanf("%d",&pos);
      for(i=pos-1;i<2;i++)
      {
          *(p+1)=*(p+i+1);
      }
      //display
      for(i=0;i<2;i++)
      {
          printf("%d data:-\n",i+1);
          printf("%s %d",ph[i].name,ph[i].a);
      }
}


