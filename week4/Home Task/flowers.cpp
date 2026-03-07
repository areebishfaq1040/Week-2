#include <iostream>
using namespace std;
int main()
{
    float price,discount,num;
    string flower;
    cout<<"Enter the name of flower: ";
    getline(cin,flower);
    cout<<"number of flower you take: ";
    cin>>num;
    if(flower=="Red Rose")
    { price=num*2.00;
    cout<<"Original Price: " <<price<<endl;
    if(price>200)
    {discount=price-(price*20/100.0);
    cout<<"After Discount Price: "<<discount;}}

     if(flower=="White Rose")
    { price=num*4.10;
    cout<<"Original Price: " <<price<<endl;
    if(price>200)
    {discount=price-(price*20/100.0);
    cout<<"After Discount Price: "<<discount;}}

     if(flower=="Tulip")
    { price=num*2.50;
    cout<<"Original Price: " <<price<<endl;
    if(price>200)
    {discount=price-(price*20/100.0);
    cout<<"After Discount Price: "<<discount;}}
}