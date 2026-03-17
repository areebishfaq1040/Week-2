#include <iostream>
using namespace std;
main()
{
    int count=0,n;
    cout<<"Enter the numbers: ";
    cin>>n;
    while(n>0)
    {
        count=count+(n%10);
        n=n/10;
    }
    cout<<"Total Numbers Of Digits is: "<<count;
}