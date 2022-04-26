#include<stdio.h>
#include<math.h>
void sum(int,int);
void main(){
int (*p)(int,int)=sum;
p(3,4);
p(8,9);
p(5,4);
}
void sum(int x,int y){
printf("\nThe sum of %d and %d is %d",x,y,x+y);

}
