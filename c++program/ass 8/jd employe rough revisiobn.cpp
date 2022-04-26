// jsg empd class
#include<iostream>
#include<string.h>
using namespace std;
class emp
{
private:
    int id;
    char name[50];
    float sal;
public:
    void set_employe();
    void show_employe();
    void set_id(int a){id=a;}
    void set_name(char s[])
    {
        strcpy(name,s);
    }
  void set_sal(float f){sal=f;}
  void get_sal(){ cout<<"\nsal = "<<sal;}
  void get_id(){ cout<<"\nid = "<<id;}
  void get_name(){ cout<<"\nname : "<<name;}

};
 void emp::set_employe()
    {
        cout<<"\nplzz enter your id,name,sal";
        cin>>id;
        cin.ignore();
        cin.getline(name,49);
        cin>>sal;

    }
void emp::show_employe()
{
    cout<<"\nData:\n";
    cout<<id<<"\n"<<name<<"\n"<<sal;
}
int main()
{
  emp e1,e2;
  e1.set_employe();
  e1.show_employe();
  e2.set_id(12);
  e2.set_name("jitendra");
  e2.set_sal(23.5);
  e2.show_employe();
  e2.get_sal();
  e2.get_id();
  e2.get_name();
}
