 #include<stdio.h>
 int main()
 {
 int i,j,r=0,min;
 int a[4]={1,2,3,4};

 for(j=1;j<=4;j++)
 {
     min=a[0];
     if(r=a[0])
      min=a[j];


 for(i=1;i<=3;i++)
 {
 if(min>a[i])
 {
     if(r==a[i])
         printf("");
     else
        if(r>a[i])
        printf("");
        else
         min=a[i];
 }

 }printf("%d\t",min);
   r=min;
 }

 }
