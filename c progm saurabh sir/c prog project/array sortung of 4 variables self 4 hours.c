 #include<stdio.h>
 int main()
 {
 int i,j,r,min;
 int a[4]={10,2,1,9};

 for(j=1;j<=4;j++)
 {


 min=a[0];
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
