#include <iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter a Positive Number: ";
    cin>>num;
    while(num<=0)
    {
        cout<<"Error: "<<num<<" is not a Positive Number."<<endl;
        cout<<"Please enter a Positive Number: "<<endl;
        cin>>num;
    }
     cout<<"Program ends";
}