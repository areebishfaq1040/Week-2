#include<iostream>
using namespace std;
main()
{
    int n,num[100];
    int even=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            even=even+1;
        }
    }
    cout<<"Total even numbers: "<<even<<endl;
}