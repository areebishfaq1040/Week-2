#include<iostream>
using namespace std;
main()
{
    int n;
    string productNames[100];
    float prices[100];
    int quantity[100];
    cout<<"Enter number of products: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name: ";
        cin>>productNames[i];
        cout<<"Enter price: ";
        cin>>prices[i];
        cout<<"Enter quantity: ";
        cin>>quantity[i];
    }
    cout<<"Product Inventory Report"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<productNames[i]<<": ,";
        cout<<prices[i]<<" ,";
        cout<<quantity[i]<<" in Stock, ";
        cout<<"Total Value: "<<(prices[i]*quantity[i])<<endl;
    }
}