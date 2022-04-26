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
    static set(static int b){k=b;}
     void get(){cout<<"your ins value "<<k;}
};
int main()
{
    Items i1,i2,i3;
    i1.set_data(1);
    i1.show_data();
}
