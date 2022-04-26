//wap to print lagest elem in 10 size array
#include<stdio.h>
int main()
{
int i,j,min;
int a[10]={10,8,2,1,5,3,4,7,9,6};

   for(i=0;i<=9;i++)
 {
        if(a[i]>min)

{ for(i=0;i<=9;i++)
  {
      if(i==0)
      {
          min=a[i];
      }
    if(min>a[i])
        min=a[i];
  }        printf("%d",min);

}
 }


return 0;
}
