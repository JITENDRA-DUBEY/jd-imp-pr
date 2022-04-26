#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
private :
    int empid;
    char name[20];
    float sal;
public:
    void setempid(int x);
    void setname(char n[]);
    void setsall(float y);
    void getsaly();
    void getname();
    void emidid();
};
  void employee::setempid(int x)

  {  cout<<"\nenter your id";
     cin>>x;
      empid=x;
  }
  void employee::setname(char n[])

  {  cout<<"Enter employee name :\n";
       //cin.ignore();
       cin.getline(n,20);
      strcpy(name,n);
  }
void employee::setsall(float y)
{  cout<<"enter your salary";
cin>>y;
    sal=y;
}
 void  employee ::getname()
 {
     int i;

         cout<<name;

 }
 void employee ::getsaly()
 {
     cout<<"\nsallray of employee= "<<sal;
 }
  void employee:: emidid()
  {
      cout<<"\nempidid= "<<empid;
  }
 int main()
 {  int x,y;
     char n[20];
   employee e1;
    e1.setempid(x);
   e1.setsall(y);
   e1.setname(n);

   e1.getname();
   e1.getsaly();
   e1.emidid();
 }
