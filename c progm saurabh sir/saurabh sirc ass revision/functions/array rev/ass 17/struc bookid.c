// structure defining book id
#include<stdio.h>
struct book{
  int bookid;
  char title[20];
  float price;
};
int main()
{
 struct book b1,b2;
 printf("plzz enter bookid,title name,price\n");
    b1.bookid=100;
    strcpy(b1.title,"java");
    b1.price=25.23;
 printf("%d\n%s\n%0.2f\n",b1.bookid,b1.title,b1.price);
 printf("plzz enter bookid,title name,price\n");
 fflush(stdin);
 scanf("%d %s %f",&b2.bookid,b2.title,&b2.price);
 printf("%d\n%s\n%0.2f\n",b2 .bookid,b2.title,b2.price);
}
