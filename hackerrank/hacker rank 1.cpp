#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
int main()
{
int n,i,j,e;
cin.ignore();
cin>>n;
int a[60],t[n];
a[0]=1;
cin.ignore();
for(i=0;i<n;i++)
{
    cin>>t[i];
}
for(i=1;i<=60;i++)
{
   if(i%2==0)
   {
       a[i]=a[i-1]+1;
   }
   else
   a[i]=2*a[i-1];
}

// first we store in t[j],then compare t[j elem anfd i value and print frioma [i]
for(j=0;j<n;j++)
{
    e=t[j];
    for(i=0;i<60;i++)
    {
        if(i==e)
           {

        cout<<a[i]<<"\n";
            break;}

    }
}

}
