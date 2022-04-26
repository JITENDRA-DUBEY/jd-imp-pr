// JSG FIRST N TEMRM O FEB SEQ
#include<iostream>
#include<conio.h>
using namespace std;
void febq(int );
int main()
{
    int n;
    cout<<"Enter total number of terms";
    cin>>n;
    febq(n);
    getch();
    return 0;
}
void febq(int n)
{
    int f,s,sum=0,i;
    cout<<"Enter fist two term of feb seq";
    cin>>f>>s;
    cout<<f<<"\t"<<s<<"\t";
    for(i=1;i<=n-2;i++)
    {
        sum = f+s;
        cout<<sum<<"\t";
        f=s;s=sum;

    }

}
