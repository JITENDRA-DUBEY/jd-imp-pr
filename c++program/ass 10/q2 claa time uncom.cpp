//jsg ass7 q2 this is in normal way
#include<iostream>
#include<conio.h>
using namespace std;
class time
{  private:
    int h,m,s;
    // h,m,s are instance member variable
public :
    //ho,mi,se are local memeber var
  void setclock(int ho,int mi,int se);
  void showtime();
  void addt(int nh,int nm,int ns)
  {
    if(ns+s>60)
    {
        s=ns+s-60;
        m=m+1;
    }
    else
        s=s+ns;
    if(nm+m>60)
    {
        m=nm+m-60;
        h=h+1;
    }
    else
        m=m+nm;
    if(nh+h>24)
    {
        h=0;
    }
    else
        h=h+nh;
  }
   void subtt(int nhs,int nms,int nss)
  {
    if(s>nss)
    {
        s=s-nss;
    }
    else
        {s=s+60-nss;
          m=m-1;
        }

    if(m>nms)
    {
        m=m-nms;
    }
    else
        {m=m+60-nms;
         h=h-1;
        }
    h=h-nhs;
  }


};
  void time ::setclock(int ho,int mi,int se)
    {
        h=ho;
        m=mi;
        s=se;
    }
    void time ::showtime()
    {
        cout<<"\n"<<h<<"hr "<<m<<"min "<<s<<"sec .";
    }
    int main()
    {
        time t1;
        int h,m,s;
        cout<<"Enter time in hour ,min,sec";
        cin>>h>>m>>s;
        t1.setclock(h,m,s);
        t1.showtime();
        //t1.addt(3,50,45);
        //cout<<"\nnew add time\n";
        //t1.showtime();
        t1.subtt(7,40,56);
        cout<<"\nnew sub time\n";
        t1.showtime();
        getch();
        return 0;
    }
