#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

//jsg logic first we find total dis el than go next step
int main()
{
    int n,i,j,k,counte,rp=0,de,mine,e;
    cout<<"Enter total el";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // for find total dis ele
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            break;
        }if(i==j)
        rp++;
    }// for dist ele
    de=rp;
    cout<<"dis el = "<<de;
     while(de)
    {
        // first find min ele
        mine=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<mine)
            mine=a[i];
        }//cout<<"min="<<mine;
        //array update deleting min eleme block
        e=0,counte=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>=mine)
            {
                counte++;
            }

            //update array
            a[i]=a[i]-mine;
            if(a[i]>0)
            {
                a[e]=a[i];
                e++;
            }
        }
        cout<<"\n"<<counte;
         n=e;
        de--;
    }
}
