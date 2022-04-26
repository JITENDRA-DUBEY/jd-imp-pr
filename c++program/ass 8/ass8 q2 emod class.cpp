#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
private :
    int empid;
    char name[50];
    float sal;
public:
    void setempid(int x);
    void setname(char n[]);
    void setsall(float y);
    void getsaly();
    void getname();
    void emidid();
    void showemply();
};
  void employee::setempid(int x)

  {  cout<<"\nenter your id";
  cin.ignore();
     cin>>x;
      empid=x;
  }
  void employee::setname(char n[])

  {  cout<<"Enter employee name :\n";
      //cin.ignore();
       cin.getline(n,22);
      strcpy(name,n);
  }
void employee::setsall(float y)
{  cout<<"\nenter your salary";
   cin>>y;
    sal=y;
    cin.ignore();//(ryt way because we clean buffer when we take input
}
 void  employee ::getname()
 {

         cout<<"\nEMPLOYEE NAME : "<<name;

 }
 void employee ::getsaly()
 {
     cout<<"\nsallray of employee= "<<sal;
 }
  void employee:: emidid()
  {
      cout<<"\nempidid= "<<empid;
  }
  void employee:: showemply()
  {
      cout<<"\nEMPLOYEE DETAILS:";
      cout<<"\nNAME : "<<name;
      cout<<"\nID : "<<empid;
      cout<<"\nSALLary : "<<sal;
  }
 int main()
 {  int x,y;
     char n[50];
   employee e1;
    e1.setname(n);
    e1.setempid(x);
    e1.setsall(y);
   e1.getname();
   e1.getsaly();
   e1.emidid();
   e1.showemply();

 }
