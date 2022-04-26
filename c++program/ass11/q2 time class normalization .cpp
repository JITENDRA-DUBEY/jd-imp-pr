// jsg time class normalize imp program
#include<iostream>
using namespace std;
class time
{ int h,m,s;
public:
    set_data(int hr,int mi,int se){s=se;m=mi;h=hr;}
    show_data(){cout<<"\n"<<h<<":"<<m<<":"<<s;}
    time operator+(time t);

    void normalize();
    bool operator>(time t);

};
time time::operator+(time t)
{
    time temp;
    temp.h=h+t.h;
    temp.m=m+t.m;
    temp.s=s+t.s;
    return temp;

}
void time:: normalize()
{
    m+=s/60;
    s=s%60;
    h+=m/60;
    m=m%60;
}
bool time::operator>(time t)
{
    if(h>t.h){return true;}
    else if(h<t.h){return false;}
    else if(m>t.h){return true;}
    else if(m<t.m){return false;}
    else if(s>t.s){return true;}
    else {return false;}

}
int main()
{
    time t1,t2,t3,t4,t5;
    t1.set_data(5,40,50);
    t1.show_data();
    t2.set_data(2,35,40);
    t2.show_data();
    t3=t1+t2;
    t3.normalize();
    t3.show_data();
    if(t1>t2)t4=t1;
    else t4=t2;
    t4.show_data();
}
