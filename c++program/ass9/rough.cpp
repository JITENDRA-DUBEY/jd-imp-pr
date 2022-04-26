
// jsg ass8
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class employee
{
public :
    int empid;
    char name[21];
    float sal;
    void setemploy();
    void displayemploy();

};
void employee::setemploy()
{
    cout<<"\nENTER YOUR NAME";
    cin.ignore();
    cin.getline(name,22);
    cout<<"ENTER YOUR ID\n";
    cin>>empid;
    cout<<"ENTER YOUR SALLY\n";
    cin>>sal;
   // cin.ignore();
};
void employee::displayemploy()
{

       cout<<"\n NAME:"<<name<<"\n id : "<<empid<<"\n sallary : "<<sal;


} void sortbysal(employee *p,int n)
    {  employee s;
       int i,j;
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
            if(((p+i)->sal)>((p+j)->sal))
            {
               s =p[i];
               p[i]=p[j];
               p[j]=s;
            }

           }
       }
    }
    void sortbyid(employee *p,int n)
    {  employee s;
       int i,j;
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
            if(((p+i)->empid)>((p+j)->empid))
            {
               s =p[i];
               p[i]=p[j];
               p[j]=s;
            }

           }
       }
    }
    void sortbyname(employee *p,int n)
    { int i,j;
        employee s;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
              if(strcmp(((p+i)->name),((p+j)->name))>0)
              {
                  s=*(p+i);//p[i];
                  p[i]=p[j];
                  p[j]=s;
              }
            }
        }
    }

int main()
{
    int i,x;
    cout<<"enter the total number of employee\n";
    cin>>x;
    employee e[x];
    for(i=0;i<x;i++)
    {  cout<<"ENTER "<<i+1<<" Person data :";
        e[i].setemploy();
    }// for our input:
    cout<<"\nTHIS IS GIVEN DATA:- ";
     for(i=0;i<x;i++)
    { cout<<"\n"<<i+1<<".person data";
        e[i].displayemploy();
    }
     sortbysal(e,x);
    cout<<"\nSORTED DATA BY SALLARY ";
    for(i=0;i<x;i++)
    { cout<<"\n"<<i+1<<".person data";
        e[i].displayemploy();
    }


}
