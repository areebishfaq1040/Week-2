#include<iostream>
using namespace std;
main()
{
    float money,expense=0;
    int year;
    cout<<"Enter Money: ";
    cin>>money;
    cout<<"Enter Year: ";
    cin>>year;
    for(int i=1800;i<=year;i++)
    {
        int age=18+(i-1800);
        if(i%2==0)
        {
        expense=expense+12000;
        }
        else
        {
        expense=expense+(12000+50*age);
        }
    }
    if(money>=expense)
    {
    cout<<"Yes! He will live a carefree life and will have "<<money-expense<<" dollars left.";
    }
    else
    {
    cout<<"He will need "<<expense-money<<" dollars to survive.";
    }
}