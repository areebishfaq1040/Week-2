#include<iostream>
using namespace std;
main()
{
    int num;
    int numbers[100];
    cout<<"Enter the Number of Elements: ";
    cin>>num;
    while(num<=0)
    {
        cout<<"Invalid Number, Numbers of Element Must be greater than 0: ";
        cin>>num;
    }
    
    cout<<"Enter "<<num<<" Numbers, One Per Line:"<<endl;
    for (int x=0;x<num; x++)
    {
        cin>>numbers[x];  
    }
    cout<<"Numbers in reverse Order: ";
    for (int i=num-1;i>=0;i--)
    {
        cout<<numbers[i]<<" ";
    }
    
}