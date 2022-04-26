#include<stdio.h>
int main(){
int i,n,r,j,a,b,g=0,h=0;
printf("plzz enter two number");
scanf("%d%d",&a,&b);
int m[a],s[b];
for(j=2;j<=a;j++)
{
 r=a%j;
 if(r==0)
 break;
}if(i==j)
  {m[g]=j;
  g++;
}
}
for(i=0;i<g;i++)
{
    printf("%d\t",m[i]);
}printf("\n");
//for second number;
for(i=2;i<=b;i++)
{
for(j=2;j<=i;j++)
{
 r=i%j;
 if(r==0)
 break;
}if(i==j)
  {s[h]=j;
  h++;
}
}

for(i=0;i<h;i++)
{
    printf("%d\t",s[i]);
}
//array element comparision
if(g<h){
for(i=0;i<g;i++)
{
    if(m[i]==s[i])
        break;
}(i<g)?printf("given number are co prime"):printf("given number are not co prime");
}
else{
for(i=0;i<h;i++)
{
    if(m[i]==s[i])
        break;
}(i<h)?printf("given number are co prime"):printf("given number are not co prime");
}
}

