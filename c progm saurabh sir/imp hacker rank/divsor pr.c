//include<stdio.h>
void divisor(int* ,int  );
int main()
{
 int i,n;
// printf("plzz enter the size\n");
 scanf("%d",&n);
 unsigned  int a[n];
 //printf("plzz enter array elements\n");
 for(i=0;i<n;i++)
 {
 scanf("%lu",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   divisor(a+i,n);
 }
}
 void divisor(int*p ,int m)
 {
   int r,d=0,count=0;
   unsigned int n=*p;
   while(*p!=0)
   {
    r=(*p)%10;
    *p=*p/10;
    if(r!=0)
     {
      if(n%r==0)
       {
         count++;
       }
    }
   }printf("%d\n",count);
 }
