//clock
#include<stdio.h>
int main()
{
 int i,m=0,s=0,h=0;
while(1)
{

     if(m>=60)
   {
     m=0;
     h++;
   }   if(h>=24)
   {
     h=0;
   }
   system("cls");
     //for second
  for(i=0;i<=60;i++)
{  system("cls");
     if(h<10)
   {
       if(m<10)
         { if(i<10)
            {printf("0%d:0%d:0%d",h,m,i);
              sleep(1);
            }
           else
           {
            printf("0%d:0%d:%d",h,m,i);
                 sleep(1);
            }
          }
        else
         {
           if(i<10)
            {
              printf("0%d:%d:0%d",h,m,i);
          sleep(1);
            }

           else
           {
            printf("0%d:%d:%d",h,m,i);
            sleep(1);
           }
         }

   }

 else
 {
     if(m<10)
         {  if(i<10)
            {
                printf("%d:0%d:0%d",h,m,i);
             sleep(1);
            }
            else
            {
            printf("%d:0%d:%d",h,m,i);
                 sleep(1);
            }
         }
      else
     {
         if(i<10)
        {printf("%d:%d:0%d",h,m,i);
        sleep(1);
        }
        else
        {
          printf("%d:%d:%d",h,m,i);
        sleep(1);
        }

      }


  }

}//for closing for loop
  //for min
  if(i==61)
    m++;
 }//foe while loop

}

