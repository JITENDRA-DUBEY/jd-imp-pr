// jsg class account sts member ;
#include<iostream>
//#include<
using namespace std;
class acc
{
private:
    char name[50];
     float bal;
    static float roi;
public:
    void set_acc();
    void show_acc();
    static set_roi(float r){roi=r;}
    static float get_roi();
    void get_name();
    void get_bal();
    float get_sibyusingroi(int y){return ((bal*y*roi)/100.0);}

};
float acc::roi;// whithour floar roi not created;
float acc::get_roi(){return roi;}
void acc:: get_name(){cout<<"\nyour name is :"<<name;}
void acc:: get_bal(){cout<<"\nyour bal is :"<<bal;}//acc:: membership level
void acc::set_acc()
{
    cout<<"\nplzz enter your name and balence";
    cin.ignore();
    cin.getline(name,49);
    cin>>bal;
}
void acc::show_acc()
{
    cout<<"\nDetails :"<<"\n Name : "<<name<<"\n Balence : "<<bal;
}

int main()
{
    float e;
    acc p1,p2,p3;
    p1.set_acc();
    p1.show_acc();
    acc::set_roi(3.4f);
    cout<<"\nshow your roi "<<acc::get_roi();
    p1.get_name();
    p1.get_bal();
   e= p1.get_sibyusingroi(3);//where 3 is time period
   cout<<"\nyour s.i : "<<e;

}
