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
    cout<<"The First Element in Array is: "<<num[0]<<endl;
    cout<<"The Last Element in Array is: "<<num[4];
}