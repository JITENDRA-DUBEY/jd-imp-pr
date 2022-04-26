// jsg time class normalize imp program
#include<iostream>
using namespace std;
class time
{ int h,m,s;
public:
    set_time(int hr,int mi,int se){s=se;m=mi;h=hr;}
    show_time(){cout<<"\n"<<h<<":"<<m<<":"<<s;}
    time operator!();
    time operator++();// pre increment;
    time operator++(int a=0);// to avoiding signature same condition

};
time time::operator!()
{
    time temp;
    if(h!=0)
   {temp.h=0;}
    else
    {temp.h=1;}
    if(m!=0)
    temp.m=0;
    else
    {temp.m=1;}
    if(s!=0)
    temp.s=0;
    else
    {temp.s=1;}
    return temp;
}
time time::operator++()
{   time temp;
    s=s+1;
    if(s>=60){m=m+1;s=s%60;}
    if(m>=60){h=h+1;m=m%60;}
    temp.h=h;temp.m=m;temp.s=s;
    return temp;
}
time time::operator++(int a=0)
{   time temp;
   temp.h=h;temp.m=m;temp.s=s;
    s=s+1;
    if(s>=60){m=m+1;s=s%60;}
    if(m>=60){h=h+1;m=m%60;}
    return temp;
}
int main()
{
    time t1,t2,t3,t4,t5,t6;
    t1.set_time(-10,35,00);
    t2=!t1;
    t2.show_time();
    t3.set_time(11,59,59);
    t4=++t3;
    t4.show_time();
    t5=t3++;
    t5.show_time();
    t3.show_time();
}

