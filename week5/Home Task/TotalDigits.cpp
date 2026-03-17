#include <iostream>
using namespace std;
main()
{
    int count=0,n;
    cout<<"Enter the numbers: ";
    cin>>n;
    while(n>0)
    {
        n=n/10;
        count=count+1;
    }
    cout<<"Total Numbers Of Digits is: "<<count;
}