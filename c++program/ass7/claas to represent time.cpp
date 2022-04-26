//jsg ass7 q2
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

};
  void time ::setclock(int ho,int mi,int se)//membership level 
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
        getch();
        return 0;
    }
