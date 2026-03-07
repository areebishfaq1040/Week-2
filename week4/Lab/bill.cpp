#include<iostream>
using namespace std;
main()
{   int num;
    cout<<"Enter number: ";
    cin>>num;
    if(num<5000,num>0){
        int discount5;
        discount5=num-(num*5/100.0);
        cout<< "your discounted ammount is "<<discount5;
    }if(num>5000)
    {int discount10;
        discount10=num-(num*10/100.0);
        cout<<"your discounted amount is "<<discount10;
    }
}