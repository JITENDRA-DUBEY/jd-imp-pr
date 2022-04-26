// jsgnote time condire from 0 to 12 uncomplete code
#include<iostream>
using namespace std;
class time
{ int s,m,h;
public:
    set_data(int se,int mi,int hr){s=se;m=mi;h=hr;}
    show_data(){cout<<"\n"<<h<<":"<<m<<":"<<s;}
    time operator+(time t);
    //time operator-(time t);
    time operator>(time t);
};
time time::operator+(time t)
{
    time tmp;
    tmp.s=s+t.s;
    if((s+t.s)>60){m=m+1;tmp.s=s+t.s-60;}
    tmp.m=m+t.m;
    if((m+t.m)>60){h=h+1;tmp.m=m+t.m-60;}
    tmp.h=h+t.h;
    return tmp;//c1-c2
}
/*time time::operator-(time t)
{
    time tmp;

    if(s<tmp.s){s=s+60;m=m-1;}
    tmp.s=s-t.s;
    //if((s+t.s)>60){m=m+1;tmp.s=s+t.s-60;}
    if(m<tmp.m){m=m+60;h=h-1;}
    tmp.m=m-t.m;
    //if((m+t.m)>60){h=h+1;tmp.m=m+t.m-60;}
    tmp.h=h-t.h;
    return tmp;
};/*/
time time:: operator>(time t)
{
    time temp;
    if(h>t.h)
       // cout<<"\nGREATER TIME IS : "<<h<<":"<<m<<":"<<s;
       {
           temp.s=s;temp.m=m;temp.h=h;
       }
    else
        //cout<<"\nSMALLER TIME IS : "<<t.h<<":"<<t.m<<":"<<t.s;
        {   if(m>t.m){temp.s=s;temp.m=m;temp.h=h;}
        else{
            //temp.s=t.s;temp.m=t.m;temp.h=t.h;
              if(s>t.s){temp.s=s;temp.m=m;temp.h=h;}
              else{temp.s=t.s;temp.m=t.m;temp.h=t.h;}
            }

        }
        return temp;
}
int main()
{
   time t1,t2,t3,t4,t5;
   t1.set_data(45,50,4);
   t1.show_data();
   t2.set_data(40,30,7);
   t3=t1+t2;
   t3.show_data();
   //t4=t2-t1;
   //t4.show_data();
   t5=t1>t2;// this function retrun greatest time
   t5.show_data();
}
