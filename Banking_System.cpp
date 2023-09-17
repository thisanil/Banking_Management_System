#include<bits/stdc++.h>
using namespace std;

class bank
{
    char name[100],add[100],y;
    int balance, amount;
public:
    void open_account ();
    void deposit_money();
    void withdraw_money ();
    void display_account();
};
void bank::open_account()
{
    system("cls");
    cout<<"Enter your full name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address :: ";
    // cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account you want to open saving (s) or current (c) :: ";
    cin>>y;
    cout<<"Enter amount for deposit ::";
    cin>>balance;
    cout<<"Your account is created :: ";

}
void bank::deposit_money()
{
    int a ;
    cout<<"Enter how much money you want to deposit ::";
    cin>>a;
    balance+=a;
    cout<<"Your total deposit amount :: "<<balance;
}
void bank::display_account()
{
    cout<<" Name ::"<<name<<endl;
    cout<<"Address ::"<<add<<endl;
    if(y=='s')
    cout<<"Type of Account  :: Saving "<<endl;
    else
    cout<<"Type of Account  :: Current  "<<endl;
    cout<<"Deposit Amount :: "<<balance<<endl;

}
void bank::withdraw_money()
{
    cout<<"Withdraw :: ";
    cout<<"Enter your amount for withdrawing :: ";
    cin>>amount;
    if(amount>balance) 
    cout<<"Insufficient Balance! Please enter valid amount.";
    else
    {
     cout<<"You have successfully Withdrawed Rs. " <<amount<<endl;
     balance=balance-amount;
     cout<<"Now your total amount is left ::"<<balance;

    }
    
}

int main()
{
    int ch;
    char x;
    bank obj;
    system("cls");
    system("color 0A");
    do
    {
    cout<<"01)Open account \n";
    cout<<"02)Deposit money \n";
    cout<<"03)WithDraw money \n";
    cout<<"04)Display account\n";
    cout<<"05)Exit\n";
    cout<<"Please sir, select the option from above ";
    cin>>ch;

    switch(ch)
    {
        case 1:
        obj.open_account ();
        break;
        case 2:
        obj.deposit_money();
        break;
        case 3:
        obj.withdraw_money ();
        break;
        case 4:
        obj.display_account();
        break;
        case 5:exit(0);
           
        default:
            cout<<"This is not exit please try again ";

    }
    cout<<"\n Do you want to select next step then please press::y\n";
    cout<<"If you want to exit then please press:: N ";
     cin>>x;
    if(x=='n' || x=='N')
       exit(0);
    }
    while (x=='y' || x=='Y');


 //getch();
 return 0;




}
