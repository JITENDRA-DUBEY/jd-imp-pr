// jsg class item
#include<iostream>
using namespace std;
class Items
{
private:
    int a;
    static int k;
     public:
     void set_data(int b){a=b;}
     void get_data(){cout<<"your ins value "<<a;}
     static set(int b){k=b;}
     static get(){cout<<"\nyour ins value "<<k;}
};
int Items::k;// this is complusory because whithout that stat k variable not created;
int main()
{
    Items i1,i2,i3;
    i1.set_data(1);
    i1.get_data();
    i2.set(5);// assesing static member by using object;
    i2.get();
    // call static member function without using object;
    Items::set(6);
    Items::get();
}
