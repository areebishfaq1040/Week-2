#include<iostream>
using namespace std;
main()
{
    int age,price,toyPrice;
    cout<<"Enter Lilly's Age: ";
    cin>>age;
    cout<<"Enter the Price Of the Washing Machine: ";
    cin>>price;
    cout<<"Enter the Unit Price Of each Toy: ";
    cin>>toyPrice;
    int toys=0;
    int money=0;
    int evenMoney=0;
    for(int i=1;i<=age;i++)
    {
        if(i%2==0)
        {
        evenMoney=evenMoney+10;
        money=money+evenMoney-1;
        }
        else
        {
        toys++;
        }
    }
    money=money+(toys*toyPrice);
    if(money>=price)
    {
    cout<<"Yes! "<<money-price;
    }
    else
    {
    cout<<"No! "<<price-money;
    }
}