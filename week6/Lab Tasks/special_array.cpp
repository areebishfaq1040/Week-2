#include<iostream>
using namespace std;
main()
{
    int size;
    int arr[100];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter "<<size<<" elements of the array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int special = 1;
    for(int i=0; i<size; i++)
    {
        if((i%2==0 && arr[i]%2!=0) || (i%2!=0 && arr[i]%2==0))
        {
            special = 0;
            break;
        }
    }
    if(special == 1)
    {
        cout<<"The array is special"<<endl;
    }
    else
    {
        cout<<"The array is not special"<<endl;
    }
}