#include <iostream>
using namespace std;
main()
{
int pin,currentBalance=220,afterDeposit,afterWithdraw,choice;
for(int i=1;i<=3;i+=1)
{
    cout<<"Enter ATM PIN: ";
    cin>>pin;
    if(pin==1234)
    {
        cout<<"Login Successful \n\n";
        break;
    }
    else
    {
        if(i==3)
        {
            cout<<"Too Many Wrong Attempts. Program End.\n\n";
            return 0;
        }
        cout<<"Wrong PIN \n";
    }

}
for(int i=1;i<=4;i+=1)
{
    cout<<"-------ATM Menu--------\n";
    cout<<"1- Check Balance \n";
    cout<<"2- Deposit Money \n";
    cout<<"3- Withdraw Money \n";
    cout<<"4- Exit \n\n";
    cout<<"Enter Choice: ";
    cin>>choice;

if(choice==1)
{
    cout<<"Your Current Balance is: "<<currentBalance<<"\n\n";
}
else if(choice==2)
{
    int depositMoney;
    cout<<"Enter Amount to Deposit: ";
    cin>>depositMoney;
    afterDeposit=depositMoney+currentBalance;
    cout<<"Your Total Amount is: "<<afterDeposit<<"\n\n";
}
else if(choice==3)
{
    int withdrawMoney;
    cout<<"Enter Amount to Withdraw: ";
    cin>>withdrawMoney;
    afterWithdraw=afterDeposit-withdrawMoney;
    cout<<"Your Total Amount is: "<<afterWithdraw<<"\n\n";
}
else if(choice==4)
{
    cout<<"Program Exit\n\n";
    break;
}    
else 
{
    cout<<"invalid Choice \n\n";
    break;
}
}
}