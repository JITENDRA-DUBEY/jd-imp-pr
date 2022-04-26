//JSG STRUCTURE OF C++
#include<iostream>
#include<conio.h>
using namespace std;
struct book
{ int bookid;
  char title[20];
  float price;
  void input()
  {
      cout<<"Enter Bookid ,Title,Price";
      cin>>bookid;
      cin.ignore();
      cin.getline(title,15);
      cin>>price;
  }
  void display()
  {
      cout<<bookid<<" "<<title<<" "<<price;
  }

};
int main()
{
    book b;
    b.input();
    b.display();
    return 0;

}
