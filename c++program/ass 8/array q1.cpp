// jsg class of cuboid
#include<iostream>
#include<conio.h>
using namespace std;
class array
{
  private :
      int a[10];//instace memeber array
  public:
    void inputarrayelement();
    void display();
    int maxelement();
    int minelement();
    void sort();
    void editelement(int index,int newdata);
    int sumofele();
    float average();
};
void array::inputarrayelement()
{
    cout<<"Enter 10 element (of array)";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
}
void array::display()
{  cout<<"\nnow array elements :";
    for(int i=0;i<10;i++)
    {
    cout<<"\n"<<a[i];
    }
}
int array::maxelement()
{
    int maxe=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>maxe)
        {
            maxe=a[i];
        }
    }
    return maxe;
}
int array::minelement()
{
    int mine=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]<mine)
        {
            mine=a[i];
        }
    }
    return mine;
}
void array::sort()
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
    void  array ::editelement(int index,int newdata)
    {
        a[index]=newdata;
    }
        int array ::sumofele()
        {
            int s=0;
            for(int i=0;i<10;i++)
            {
                s=s+a[i];
            }return s;
        }
        float array ::average()
        {
            float avg;
            avg=sumofele()/10.0;

            return avg;
        }
int main()
{  int k,l,ind,nd,sum;
float av;
    array b;
    b.inputarrayelement();
       // b.display();
    //b.sort();
    //b.display();
    cout<<"Enter index number which u want to update and new data";
    cin>>ind>>nd;
    b.editelement(ind,nd);
     //b.display();
    k=b.maxelement();
    cout<<"\nMax element = "<<k;
    l=b.minelement();
    cout<<"\nMin element = "<<l;
    sum=b.sumofele();
    cout<<"\nSum of ele = "<<sum;
    av=b.average();
    cout<<"\navg of ele = "<<av;

    getch();
    return 0;
}
