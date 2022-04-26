#include<iostream>
#include<string.h>
using namespace std;
class emp
{
public:
    int id;
    char name[50];
    float sal;
    void set_employe();
    //void show_employe(emp e[]);
};
void emp::set_employe()
    {
        cout<<"\nplzz enter your id,name,sal";
        cin>>id;
        cin.ignore();
        cin.getline(name,49);
        cin>>sal;

    }
void show_employe(emp e[])
    {
        for(int i=0;i<3;i++)
        {
            cout<<"\nData of "<<i+1<<" person : ";
            cout<<"Id : "<<e[i].id<<"\t"<<"Name : "<<e[i].name<<"\t"<<"Sal : "<<e[i].sal;
        }
    }
void short_id(emp e[])
    {
        emp t;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(e[i].id>e[j].id)
                {
                    t=e[i];
                    e[i]=e[j];
                    e[j]=t;
                }
            }
        }
    }
    void short_name(emp e[])
    {
      emp t;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(strcmp(e[i].name,e[j].name)>0)
                {
                    t=e[i];
                    e[i]=e[j];
                    e[j]=t;
                }
            }
        }
    }
    int main()
    { int i;
        emp t[3];
        for(i=0;i<3;i++)
        {
            t[i].set_employe();
        }
         show_employe(t);
         short_id(t);
                  show_employe(t);
                  short_name(t);
                  show_employe(t);

}
