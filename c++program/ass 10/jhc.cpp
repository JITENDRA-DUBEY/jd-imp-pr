#include<iostream>
#include <iomanip>
using namespace std;
class Account{
long long int account_no;
double balance;
static int rate;
public:
    void set_balance(double b){balance=b;}
    void set_account(long long int a){account_no=a;}
    double get_balance(){return balance;}
    long long int get_account(){return account_no;}

    static void set_interest(int r){rate=r;}

    static int get_interest(){return rate;}
};
int Account::rate;

int main(){
    int i;
   long long int account_no;
double balance;
int rate;
Account person[3];
   cout<<fixed;
   cout << setprecision(4);
for(int i=0;i<3;i++){

cout<<"\n\nEnter the account no. for person "<<i+1<<" ";
cin>>account_no;
person[i].set_account(account_no);
cout<<"\nEnter the balance in the account ";
cin>>balance;
person[i].set_balance(balance);
cin.ignore();
}
cout<<"Details of peoples ";
for(int i=0;i<3;i++){
        cout<<"\n\nPERSON "<<i+1<<"\n";
cout<<"\n\n Account No.  : "<<person[i].get_account()<<"  Balance : "<<person[i].get_balance()<<"\n";
}
cout<<"\nEnter the interest rate ";
cin>>rate;

  Account::set_interest(rate);
cout<<"\nEnter the person no. for which uh want to get the interest";
cin>>i;
cout<<"The rate of interest is = "<<person[i].get_interest();
}
