#include<iostream>
using namespace std;
main()
{
    int n,num[100];
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int largest=num[0];
    int smallest=num[0];
    for(int i=1;i<n;i++)
    {
        if(num[i]>largest)
        {
            largest=num[i];
        }
        if(num[i]<smallest)
        {
            smallest=num[i];
        }
    }
    cout<<"Largest Number: "<<largest<<endl;
    cout<<"Smallest Number: "<<smallest<<endl;
}