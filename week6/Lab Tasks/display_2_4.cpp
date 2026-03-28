#include <iostream>
using namespace std;
main()
{
    int num[5];
    for(int x=0;x<5;x++)
    {
        cout<<"Enter "<<x+1<<" Number:";
        cin>>num[x];
    }
    cout<<"The 2nd Element in Array is: "<<num[1]<<endl;
    cout<<"The 4th Element in Array is: "<<num[3];
}