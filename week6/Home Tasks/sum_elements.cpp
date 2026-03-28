#include<iostream>
using namespace std;
main()
{
    int n,num[100];
    int sum=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    cout<<"Sum of all elements: "<<sum<<endl;
}