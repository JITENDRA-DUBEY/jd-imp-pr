//sum of even and odd number of array
int main()
{
int i,n,se=0,so=0;
printf("plzz enter nukmb of element in aray:-");
scanf("%d",&n);
int a[n];
printf("plzz enter %d numbers:-\n",n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
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
