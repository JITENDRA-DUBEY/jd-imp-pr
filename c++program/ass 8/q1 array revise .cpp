#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a[5];
public:
    void input();
    void show();
    int max();
    //int min();
    void sorte();
    void edit(int x,int y);
    void sum();
    void avg();
    void editel(int e,int f)
    {
        a[e-1]=f;}

    void del_el(int e);//index which u want to delete;
};
void complex::input()
{
    cout<<"\n plzz enter array elemnt";
    for(int i=0;i<5;i++)
    {

        cin>>a[i];
    }
}
void complex::show()
{
    cout<<"\nnow array elements";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
}
int complex::max()
{
    int max=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>max){max=a[i];}
    }
   // cout<<"\n now max el= "<<max;
   return max;
}
void complex::sorte()
{
    int i,j,t;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {if(a[i]>a[j])
            {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }

        }
    }
}
//void complex::editel(int e,int f);
void complex::del_el(int e)
{
    for(int i=e-1;i<4;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<"\n";
    }
}
int main()
{
    complex c;
    c.input();
    c.show();
   int k= c.max();
   cout<<"\n now max el= "<<k;
    c.sorte();
   c.show();
   c.editel(3,32);
   c.show();
   c.del_el(3);
}

