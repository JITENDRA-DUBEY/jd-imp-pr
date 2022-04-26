#include<stdio.h>
void main(){
int a[9],b[9],i,n=0;
printf("Enter element in array \n");
for(i=0;i<9;i++){
    scanf("%d",&a[i]);
}
b[0]=a[6];
b[1]=a[7];
b[2]=a[8];
for(i=3;i<9;i++){
    b[i]=a[n];
    n++;
}
for(i=0;i<9;i++){
    printf("%d ",b[i]);
}
}
