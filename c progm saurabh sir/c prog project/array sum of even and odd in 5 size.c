//sum of even and odd number of array
int main()
{
int i,se=0,so=0;
int a[]={1,2,3,4,5};
for(i=0;i<=4;i++)
{
if(a[i]%2==0)
{
se=se+a[i];
}
else
{
so=so+a[i];
}
}
printf("sum of even=%d\n",se);
printf("sum of odd=%d\n",so);
return 0;

}
