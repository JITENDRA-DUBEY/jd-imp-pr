 #include<stdio.h>
 int main()
 {int x,i,j;
 printf("entert a numb");
 scanf("%d",&x);
 for(i=2;x>1;i++){


      while(x%i==0)
      {
          printf("%d\n",i);
          x=x/i;

      }
 }
 return 0;
 }
