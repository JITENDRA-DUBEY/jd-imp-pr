//JSG WAP TO REVERSE A NUUMBEBR
#include<conio.h>
#include<iostream>
using namespace std;
void pow(int ,int );
int main()
{
    int x,y;
    cout<<"Enter The Value Of Base And Power";
    cin>>x>>y;
    pow(x,y);
    getch();
    return 0;
}
void pow(int x,int y)
{ int z=1,i,j;
    if(y==0)
    {
        cout<<"1";
    }
    else
    {
     for(i=x,j=1;j<=y;j++)
     {
         z=z*i;
     }
     cout<<z;
    }

}
