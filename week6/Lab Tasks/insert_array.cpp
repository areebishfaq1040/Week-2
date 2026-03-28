#include<iostream>
using namespace std;
main()
{
    int arr1[2];
    int arr2[100];
    int n;
    cout<<"Enter 2 elements for the first array, one per line:"<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements for the second array, one per line:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    for(int i=1;i<2;i++)
    {
        cout<<arr1[i];
    }
}