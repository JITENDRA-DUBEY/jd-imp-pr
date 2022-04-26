#include<stdio.h>
void dlt(int *p);
void display(int *p);
int main()
{ int *p;
  int a[10]={1,3,5,7,5,6,7,8,9,10};

    p=a;
   dlt(a);
   display(a);

  return 0;
}
void dlt(int *p)
{ int k,i;
 printf("plzz enter the sn which u  want to delete\n");
 scanf("%d",&k);
 i=k-1;
  for(i=k-1;i<9;i++)
  {
      *(p+i)=*(p+i+1);
  }
}
void display(int *p)
{ int i;
  for(i=0;i<9;i++)
  {
   printf("%d\n",*(p+i));
  }
}

