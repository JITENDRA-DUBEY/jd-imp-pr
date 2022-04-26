// structure defining book id
#include<stdio.h>
struct book{
  int bookid;
  char title[20];
  float price;
};
int main()
{
 struct book b2;
 printf("plzz enter bookid,title name,price\n");
 struct book b1 =(123,"java.txt",230.56);
 printf("%d %s %f",b1.bookid,b1.title,b1.price);
}

