#include<stdio.h>
#include<stdlib.h>
typedef struct phonebook phone;
struct phonebook{
char firstname[50];
char lastname[50];
char mobile_no[12];
};
int choice=0, a,i,n,count=0,s;
char ch,e;
phone p[50];
void add_record(phone *p);
void list_record(phone *p);
void record_delete(int n);


int main(){

while(choice!=5){
printf("\n\n            PHONEBOOK                 \n");
printf("***************\n\n");

printf("Press 1 to add record in phone book\n");
printf("Press 2 to delete a record\n");
printf("Press 3 to list available record\n");
printf("Press 4 to search a record\n");
printf("Press 5 to exit \n");

printf("***************\n\n");

printf("Enter your choice ");
scanf("%d",&choice);


/*SWITCH BLOG */
switch(choice){
                    case 1:
                         printf("\n******ADDING NUMBER IN PROCESS*********\n");
                      a=0;
                     add_record(&p[a]);
                     a++;
                     while(ch!='n' || ch!='N'){
                     printf("\nYou want to enter more data....Please type Y/N \n");
                    fflush(stdin);
                    scanf("%c",&ch);
                    if(ch=='n' || ch=='N'){
                        break;
                    }
                     add_record(&p[a]);
                     a++;
                     }
                      system("cls");
                     break;


                    case 2:
                        printf("\n**********DELETING RECORD***********\n");
                        printf("\nEnter the record which uh want to delete \n ");
                        scanf("%d",&n);
                        delete_record(n-1);
                        system("cls");
                         break;


                        case 3:
                              printf("\n*********CONTACTS***********\n");
                            for(i=0;i<a-count;i++){
                      list_record(&p[i]);
                            }
                             getche();
                             system("cls");
                        break;

                        case 4:
                            printf("\n*************SEARCHING********\n");
                            printf("\nEnter the record No. That Uh Want to Search \n");
                            scanf("%d",&s);
                            list_record(&p[s-1]);
                            getche();
                            system("cls");
                            break;



                        case 5:
                            printf("Are you Sure you Want to Exit.....Y/N \n");
                            fflush(stdin);
                            scanf("%c",&e);
                            if(e=='y' || e=='Y'){
                                exit(1);
                            }
                            else
                                choice=0;
                                system("cls");
                            break;

                           default:
                           printf(" Sorry uh enter a wrong no. ");
                             getche();
                             system("cls");
}
}
return 0;
}

void add_record(phone *p){
printf("Enter the first name \n");
fflush(stdin);
gets(p->firstname);
printf("Enter the last name \n");
fflush(stdin);
gets(p->lastname);
printf("Enter mobile no-> \n");
fflush(stdin);
gets(p->mobile_no);
}

void list_record(phone *p){
printf("\n");
printf("%s %s\n Mobile No. :- %s\n",p->firstname,p->lastname,p->mobile_no);

}


void delete_record(int n){
for(i=n;i<a;i++){
    p[i]=p[i+1];
}
}
