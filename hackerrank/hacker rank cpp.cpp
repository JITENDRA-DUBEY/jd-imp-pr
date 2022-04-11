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

int n,i,t[10];
cin>>n;
int a[n];
a[0]=1
for(i=1;i<n;i++)
{
   if(i%2==0)
   {
       a[i]=a[i-1]+1;
   }
   else
   a[i]=2*a[i-1];
} for(i=0;i<n;i++)
{
  cout<<"\n"<<a[i];
}
