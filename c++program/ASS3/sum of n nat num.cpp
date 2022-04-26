//JSG ASS3
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n,i=1,sum=0;
    cout<<"plzz enter last natural number till that u want to sum\n";
    cin>>n;
    while(i!=n+1)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum of "<<n<<" natural numbers = "<<sum;
    return 0;
}
