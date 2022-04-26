#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
int i,n,end=0,k;
long int score=0;
int count=1,lifeline=1;
char c;
//function declaration/
void win();
void loss();
void fivefive1();
void fivefive2();
void fivefive3();
void fivefive4();
void fivefive5();
void fivefive6();
void fivefive7();
void fivefive8();
void fivefive9();
void fivefive10();
void audience1();
void audience2();
void audience3();
void audience4();
void audience5();
void audience6();
void audience7();
void audience8();
void audience9();
void audience10();
//Main function/
void main(){
char s[30];

printf("**********************\n");
printf("                           KBC(Kaun Banega Crorepati)                                 \n");
printf("**********************\n");
printf(" Enter your name \n");
gets(s);
system("cls");

    for(i=0;i<=100;i++){
        printf("                                                                        Loading....%d",i);
        system("cls");
    }
    printf("                                                                  WELCOME %s\n",strupr(s));

printf("                           Rules for the Game                  \n\n");
printf("*************************************************************\n");

printf("1.There are 10 total Question and 3 level for the Game,1 Level will be easy, 2 Level will be tough and defintely the last level will give uh a tag of crorepati \n");
printf("2.You have two life line in the Game.One will be 50-50 and another will be Audience Poll  \n");
printf("3.Please Press 1,2,3 and 4 for chosing a option \n");
printf("4.Instruction for using Lifeline....There will be only 2 lifeline only and uh can use a lifeline once only\n For using 50-50 press 5 and for using Audience Poll Press 6 \n");
printf("4.If you answer a question wrong then you will loss at that point only \n");
printf("*************************************************************\n");
printf("\n\n                                                BEST OF LUCK!!                               \n\n");
printf("*************************************************************\n");

printf("\nPress Enter for continue\n");

getche();
system("cls");
Question();

}
void Question(){
  system("cls");
  score=0;

while(1){
printf("Out of the following which is the latest movie of akshay kumar \n");
printf("1)Sooryavanshi  \t\t 2)BellBottom \n3)83\t\t 4)Housefull \n");
scanf("%d",&i);
                                        if(i==1){
                                            score=score+10000;
                                            win(score);
                                        }
                                        else if(i==5)
                                            fivefive1();
                                            else if(i==6)
                                                audience1();
                                        else
                                            loss();


printf("............................Money in Account=Rs.10,000......................\n\n\n\n\n");
printf("C language comes in which group \n");
printf("1)High level language \t\t 2)Low level language \n3)Middle level language\t\t 4)None of these \n");
scanf("%d",&i);
                           if(i==3){
                                            score=score+10000;
                                            win(score);
                                        }
                                        else if(i==5)
                                            fivefive2();
                                            else if(i==6)
                                                audience2();
                                        else
                                            loss();


printf("............................Money in Account=Rs.20,000......................\n\n\n\n\n");
printf("What is name of the main character in the movie Spider No Way Home\n");
printf("1)NED LEEDS \t\t 2)TOM HOLLAND \n3)MJ\t\t 4)DOCTOR STRANGE \n");
scanf("%d",&i);
                               if(i==2){
                                            score=score+20000;
                                            win(score);
                                        }
                                        else if(i==5)
                                            fivefive3();
                                             else if(i==6)
                                                audience3();
                                        else
                                            loss();


printf("............................Money in Account=Rs.40,000......................\n\n\n\n\n");
printf("Which of the following cannot be a variable name in C Language?\n");
printf("1)volatile \t\t 2)true \n3)friend\t\t 4)export \n");
scanf("%d",&i);
                       if(i==1){
                                            score=score+40000;
                                            win(score);
                                        }
                                        else if(i==5)
                                            fivefive4();
                                             else if(i==6)
                                                audience4();
                                        else
                                            loss();

printf("******************************Congrats Uh Passed 1 level **************************** \n");
sleep(2);
  system("cls");


printf("............................Money in Account=Rs.80,000......................\n\n\n\n\n");
printf("How many number of pointer (*) does C have against a pointer variable declaration?\n");
printf("1)7 \t\t 2)127 \n3)255\t\t 4)No limits\n");
scanf("%d",&i);
                                 if(i==4){
                                            score=score+20000;
                                            win(score);
                                        }
                                        else if(i==5)
                                            fivefive5();
                                             else if(i==6)
                                                audience5();
                                        else
                                            loss();

printf("............................Money in Account=Rs.1,00,000......................\n\n\n\n\n");
printf("Accumulator based Microprocessor example are \n");
printf("1)intel 8085 \t\t 2)Motorola 6809 \n3)a and b both\t\t 4)None of these\n");
scanf("%d",&i);
                     if(i==3){
                                            score=score+900000;
                                            win(score);
                                        }
                                        else if(i==5)
                                            fivefive6();
                                             else if(i==6)
                                                audience6();
                                        else
                                            loss();

printf("............................Money in Account=Rs.10,00,000......................\n\n\n\n\n");
printf("The main purpose of Accumulator Register of 8085 is  \n");
printf("1)temporary data storage \t\t 2)selection of peripheral \n3)storing instruction\t\t 4)used as primary pointer\n");
scanf("%d",&i);

                    if(i==1){
                                            score=score+1500000;
                                            win(score);
                                        }
                                        else if(i==5)
                                            fivefive7();
                                             else if(i==6)
                                                audience7();
                                        else
                                            loss();

 printf("******************************Congrats Uh Passed 2 level**************************** \n");
 sleep(2);
  system("cls");

printf("............................Money in Account=Rs.25,00,000......................\n\n\n\n\n");
printf("How many bites are required to encode 2000 bits of data \n");
printf("1)16 \t\t 2)8 \n3)2\t\t 4)32\n");
scanf("%d",&i);

                                     if(i==3){
                                            score=score+2500000;
                                            win(score);
                                        }
                                        else if(i==5)
                                            fivefive8();
                                             else if(i==6)
                                                audience8();
                                        else
                                            loss();


printf("............................Money in Account=Rs.50,00,000......................\n\n\n\n\n");
printf("Which of the following computer language is used for artificial intelligence? \n");
printf("1)FORTRAN \t\t 2)PROLOG \n3)C\t\t 4)COBOL\n");
scanf("%d",&i);

                                            if(i==2){
                                            score=score+2500000;
                                            win(score);
                                        }
                                        else if(i==5)
                                            fivefive9();
                                             else if(i==6)
                                                audience9();
                                        else
                                            loss();


  printf("Soch Samaj ke Jawab dena yeh question apko crorepati bana sakta hei \n\n");

printf("............................Money in Account=Rs.75,00,000......................\n\n\n\n\n");
printf("Which state has the largest area? \n");
printf("1)Uttar Pradesh \t\t 2) Maharastra \n3)Rajasthan\t\t 4)Madhya Pradesh\n");
scanf("%d",&i);



                              if(i==3){
                                          printf("Kya lagta hei apko %d option sahi hei......?\n",i);
                                          for(end=0;end<=30;end++);
                                          printf("*****************************Congrats Ap Crorepati ban gye****************************\n");
                                          printf("This amount will be transferred to your Bank.....All the best \n");
                                          }
                                      else if(i==5)
                                        fivefive10();
                                         else if(i==6)
                                                audience10();

                                      else
                                        printf("Sorry You were too close and You Missed it \n");


}

}




















void win(int score ){
printf("******************************Congrats Uh Won %d**************************** \n",score);
    sleep(2);
    system("cls");
}

void fivefive1(){
                                      if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==1){
                                                score=score+10000;
                                        win(score);
                                        }
                                        else if(n==6)
                                            audience1();
                                        else
                                            loss();
                                            system("cls");

                                    }

                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                            printf("Out of the following which is the latest movie of akshay kumar \n");

                        printf("1)Sooryavanshi  \t\t 2)BellBottom \n");
                        scanf("%d",&n);
                         if(n==1){
                                score=score+10000;
                            win(score);
                         }
                         else
                            loss();
                            system("cls");
}
}
void fivefive2(){
 if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==3){
                                                score=score+10000;
                                        win(score);
                                        }
                                         else if(n==6)
                                            audience2();
                                        else
                                            loss();
                                            system("cls");
                                    }

                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                              printf("C language comes in which group \n");
                        printf("1)High level language \t\t 2)Middle level language \n");
                        scanf("%d",&n);
                         if(n==2){
                                score=score+10000;
                            win(score);
                         }
                         else
                            loss();
                            system("cls");
}
}
void fivefive3(){
if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==2){
                                                score=score+20000;
                                        win(score);
                                        }
                                         else if(n==6)
                                            audience3();
                                        else
                                            loss();
                                            system("cls");
                                    }

                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                              printf("What is name of the main character in the movie Spider No Way Home\n");

                         printf("1)NED LEEDS \t\t 2)TOM HOLLAND \n");
                        scanf("%d",&n);
                         if(n==2){
                                 score=score+20000;
                            win(score);
                         }
                         else
                            loss();
                            system("cls");
}
}

void fivefive4(){
if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==1){
                                                score=score+40000;
                                        win(score);
                                        }
                                         else if(n==6)
                                            audience4();
                                        else
                                            loss();
                                            system("cls");
                                    }

                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                             printf("Which of the following cannot be a variable name in C Language?\n");
                         printf("1)volatile \t\t 2)export \n");
                        scanf("%d",&n);
                         if(n==1){
                                 score=score+40000;
                            win(score);
                         }
                         else
                            loss();
                            system("cls");
}
}

void fivefive5(){

if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==4){
                                                score=score+20000;
                                        win(score);
                                        }
                                         else if(n==6)
                                            audience5();
                                        else
                                            loss();
                                            system("cls");
                                    }

                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                         printf("How many number of pointer (*) does C have against a pointer variable declaration?\n");


                        printf("1)255\t\t 2)No limits \n");
                        scanf("%d",&n);
                         if(n==2){
                                 score=score+20000;
                            win(score);
                         }
                         else
                            loss();
                            system("cls");
}
}

void fivefive6(){
if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==3){
                                                score=score+900000;
                                        win(score);
                                        }
                                         else if(n==6)
                                            audience6();
                                        else
                                            loss();
                                            system("cls");
                                    }

                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                         printf("Accumulator based Microprocessor example are \n");


                        printf("1)intel 8085 \t\t 2)a and b both \n");
                        scanf("%d",&n);
                         if(n==2){
                                 score=score+900000;
                            win(score);
                         }
                         else
                            loss();
                            system("cls");
}
}

void fivefive7(){
if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==1){
                                                score=score+1500000;
                                        win(score);
                                        }
                                         else if(n==6)
                                            audience7();
                                        else
                                            loss();
                                            system("cls");
                                    }

                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                         printf("The main purpose of Accumulator Register of 8085 is  \n");


                       printf("1)temporary data storage \t\t 2)storing instruction \n");
                        scanf("%d",&n);
                         if(n==1){
                                 score=score+1500000;
                            win(score);
                         }
                         else
                            loss();
                            system("cls");
}
}
void fivefive8(){
if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==3){
                                                score=score+2500000;
                                        win(score);
                                        }
                                         else if(n==6)
                                            audience8();
                                        else
                                            loss();
                                            system("cls");
                                    }

                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                         printf("How many bites are required to encode 2000 bits of data \n");

                      printf("1)16 \t\t 2) 2 \n");
                        scanf("%d",&n);
                         if(n==2){
                                 score=score+2500000;
                            win(score);
                         }
                         else
                            loss();
                            system("cls");
}
}
void fivefive9(){
if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==2){
                                                score=score+1500000;
                                        win(score);
                                        }
                                         else if(n==6)
                                            audience9();
                                        else
                                            loss();
                                            system("cls");
                                    }

                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                         printf("Which of the following computer language is used for artificial intelligence? \n");

                     printf("1)FORTRAN \t\t 2)PROLOG \n");
                        scanf("%d",&n);
                         if(n==2){
                                 score=score+1500000;
                            win(score);
                         }
                         else
                            loss();
                            system("cls");
}
}
void fivefive10(){
if(count==0){
                                        printf("Uh Have Already use the lifeline \n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==3){
                                               printf("Kya lagta hei apko %d option sahi hei......?\n",i);
                                          for(end=0;end<=30;end++);
                                          printf("*****************************Congrats Ap Crorepati ban gye****************************\n");
                                          printf("This amount will be transferred to your Bank.....All the best \n");
                                          }
                                       else if(n==6)
                                            audience10();
                                        else
                                        printf("Sorry You were too close and You Missed it \n");

}



                                else {
                                count=0;
                              printf("Uh Chose 50-50 lifeline \n ");
                            sleep(2);
                            system("cls");
                            printf("Which state has the largest area? \n");

                        printf("1)Uttar Pradesh  \t\t 2)Rajasthan \n");
                        scanf("%d",&n);
                         if(n==2){
                                printf("Kya lagta hei apko %d option sahi hei......?\n",i);
                                          for(end=0;end<=30;end++);
                                          printf("*****************************Congrats Ap Crorepati ban gye****************************\n");
                                          printf("This amount will be transferred to your Bank.....All the best \n");
                         }
                         else
                            printf("Sorry You were too close and You Missed it \n");
                            system("cls");
}
}




void audience1(){
                                    if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==1){
                                            score=score+10000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
                                    else{
                                            lifeline=0;
                                        printf("You use Audience Poll\n");printf("Here the Audience Poll result\n");
                                    printf("1)70%%  \t\t 2)20%% \n3)6%% \t\t 4)4%% \n ");
                                    printf("Looks like peoples go with 1 option....please enter your choice now\n");
                                    scanf("%d",&n);
                                      if(n==1){
                                            score=score+10000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
}
void audience2(){
   if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==3){
                                            score=score+10000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
                                    else{
                                            lifeline=0;

                                     printf("You use Audience Poll\n");printf("Here the Audience Poll result\n");
                                        printf("1)6%%  \t\t 2)40%% \n3)50%% \t\t 4)4%% \n ");
                                        printf("Looks like peoples go with 3 option....please enter your choice now\n");
                                        scanf("%d",&n);
                                      if(n==3){
                                            score=score+10000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
}
void audience3(){
 if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==2){
                                            score=score+20000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
                                    else{
                                            lifeline=0;
                                        printf("You use Audience Poll\n");printf("Here the Audience Poll result\n");
                                     printf("You use Audience Poll\n");printf("Here the Audience Poll result\n");
                                        printf("1)6%%  \t\t 2)50%% \n3)40%% \t\t 4)4%% \n ");
                                        printf("Looks like peoples go with 2 and 3 option....please enter your choice now\n");
                                        scanf("%d",&n);
                                      if(n==2){
                                            score=score+20000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
}
void audience4(){
 if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==1){
                                            score=score+40000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
                                    else{
                                            lifeline=0;
                                        printf("You use Audience Poll\n");printf("Here the Audience Poll result\n");
                                     printf("1)70%%  \t\t 2)20%% \n3)6%% \t\t 4)4%% \n ");
                                        printf("Looks like peoples go with 1 option....please enter your choice now\n");

                                        scanf("%d",&n);
                                      if(n==1){
                                            score=score+40000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
}
void audience5(){
if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==4){
                                            score=score+20000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
                                    else{
                                            lifeline=0;
                                     printf("1)40%%  \t\t 2)4%% \n3)6%% \t\t 4)50%% \n ");
                                    printf("Looks like peoples go with 1 and  2 option....please enter your choice now\n");

                                        scanf("%d",&n);
                                      if(n==4){
                                            score=score+20000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
}
void audience6(){
if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==3){
                                            score=score+900000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
                                    else{
                                            lifeline=0;
                                     printf("1)40%%  \t\t 2)6%% \n3)60%% \t\t 4)4%% \n ");
                                    printf("Looks like peoples go with 3 option....please enter your choice now\n");

                                        scanf("%d",&n);
                                      if(n==3){
                                            score=score+900000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }

}
void audience7(){
if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==1){
                                            score=score+1500000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
                                    else{
                                            lifeline=0;
                                     printf("1)70%%  \t\t 2)6%% \n3)20%% \t\t 4)4%% \n ");
                                    printf("Looks like peoples go with 1 option....please enter your choice now\n");

                                        scanf("%d",&n);
                                      if(n==1){
                                            score=score+1500000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
}
void audience8(){

if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==3){
                                            score=score+2500000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
                                    else{
                                            lifeline=0;
                                     printf("1)40%%  \t\t 2)6%% \n3)50%% \t\t 4)4%% \n ");
                                    printf("Looks like peoples go with 1 and 3 option....please enter your choice now\n");

                                        scanf("%d",&n);
                                      if(n==3){
                                            score=score+2500000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }

}
void audience9(){
if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==2){
                                            score=score+1500000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }
                                    else{
                                            lifeline=0;
                                     printf("1)40%%  \t\t 2)50%% \n3)6%% \t\t 4)4%% \n ");
                                    printf("Looks like peoples go with 1 and 2 option....please enter your choice now\n");

                                        scanf("%d",&n);
                                      if(n==2){
                                            score=score+1500000;
                                            win(score);
                                        }
                                        else
                                            loss();
                                        system("cls");
                                    }

}
void audience10(){
if(lifeline==0){
                                        printf("Sorry, you already use this lifeline\n");
                                        fflush(stdin);
                                        scanf("%d",&n);
                                        if(n==3){
                                             printf("Kya lagta hei apko %d option sahi hei......?\n",i);
                                          for(end=0;end<=30;end++);
                                          printf("*****************************Congrats Ap Crorepati ban gye****************************\n");
                                          printf("This amount will be transferred to your Bank.....All the best \n");
                                        }
                                        else
                                           printf("Sorry You were too close and You Missed it \n");
                                    }
                                    else{
                                            lifeline=0;
                                     printf("1)40%%  \t\t 2)10%% \n3)45%% \t\t 4)5%% \n ");
                                    printf("Looks like peoples go with 1 and 3 option....please enter your choice now\n");

                                        scanf("%d",&n);
                                      if(n==3){
                                           printf("Kya lagta hei apko %d option sahi hei......?\n",i);
                                          for(end=0;end<=30;end++);
                                          printf("*****************************Congrats Ap Crorepati ban gye****************************\n");
                                          printf("This amount will be transferred to your Bank.....All the best \n");
                                        }
                                        else
                                          printf("Sorry You were too close and You Missed it \n");
                                    }


}





void loss(){
printf("Sorry...Humara Safar Yahi tak tha....Ap ke sath khel ke maja aaya \n\n ");
                            printf("You Won Rs. %d.......\n\n\n",score);
                            usleep(50);
                            printf("Do you want to play more? please press y(YES) or n(NO). \n");
                            fflush(stdin);
                            scanf("%c",&c);
                            if(c=='y' || c=='Y')
                            Question();
                            else
                              exit(1);
}
