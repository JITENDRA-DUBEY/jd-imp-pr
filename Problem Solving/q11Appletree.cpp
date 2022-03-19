#include<stdio.h>
int main()
{
    int a,b,i,m,n,s,t;
    int max=0,min=0;
    
    scanf("%d%d",&s,&t);  // Distance //
    scanf("%d%d",&a,&b);  // Apple and orange //
    scanf("%d%d",&m,&n);  // No. of apple and orange //
    int app[m],or[n],apple[m],orange[n];  // Store apple and orange //
    
    for(i=0;i<m;i++) // [-2,2,1]  // 
    {  
        scanf("%d",&app[i]);
    }
    for(i=0;i<n;i++) // [5,-6]  //
    {
        scanf("%d",&or[i]);
    }
    for(i=0;i<m;i++)
    {
        apple[i]=a+app[i]; // Apple Adding //
    }
    for(i=0;i<n;i++)
    {
        orange[i]=b+or[i];  // orange adding //
    }
    
    // check the condition //
    for(i=0;i<m;i++)
    {
        if(apple[i]>=s && apple[i]<=t)
        max++;
    }
    for(i=0;i<n;i++)
    {
        if(orange[i]>=s && orange[i]<=t)
        min++;
    }
    
    printf("%d\n%d",max,min);
    
    return 0;
    
}

