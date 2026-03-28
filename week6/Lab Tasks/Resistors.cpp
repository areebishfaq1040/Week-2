#include <iostream>
using namespace std;
main()
{
    int num;
    float resistance[100];
    float total=0;
    cout<<"Enter the Number of Resistors: ";
    cin>>num;
    cout<<"Enter "<<num<<" Resistance Values:"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>resistance[i];
        total=total+resistance[i];
    }
    cout<<"Total Resistance is: "<<total<<" ohms";
}