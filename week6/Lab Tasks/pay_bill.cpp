#include<iostream>
using namespace std;
main()
{
    float change[4];
    float amount_due;
    float total_amount;
    cout<<"Enter quarters: ";
    cin>>change[0];
    cout<<"Enter dimes: ";
    cin>>change[1];
    cout<<"Enter nickels: ";
    cin>>change[2];
    cout<<"Enter pennies: ";
    cin>>change[3];
    total_amount=(change[0]*0.25)+(change[1]*0.10)+(change[2]*0.05)+(change[3]*0.01);
    cout<<"Enter the total amount due: ";
    cin>>amount_due;
    cout<<"Total amount: "<<total_amount<<endl;
    if(total_amount>=amount_due)
    {
        cout<<"Can you pay for this: Yes";
    }
    else
    {
        cout<<"Can you pay for this: No";
    }
}