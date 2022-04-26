//#include<stdio.h>
// grading problem in hacker rank
void grade(int*p,int m);
int main()
{
    int i,n;
    printf("plzz entertotal number of students\n");
    scanf("%d",&n);
    int a[n];
    fflush(stdin);
    printf("plzz enter array elements\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    fflush(stdin);
      for(i=0;i<n;i++)
      {
          grade(a+i,n);
      }
}
    void grade(int*p,int m)
    {   int r;
        int n=*p;
        if(n<38)
            printf("%d\n",n);
         else
          {
          r=n%5;
          if(r>=3)
          {
              n=n+(5-r);
          printf("%d\n",n);}
          else
            {
                printf("%d\n",n);
            }
         }


      }
