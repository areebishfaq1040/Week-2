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
    for(int i=0;i<num;i++)
    {
        int value;
        cin>>value;
        int found=0;
        for(int j=0;j<i;j++)
        {
            if(numbers[j]==value)
            {
                found=1;
                break;
            }
        }
        if(found==1)
        {
            cout<<"Already Entered"<<endl;
            i--;
        }
        else
        {
            numbers[i]=value;
        }
    }
    cout<<"Unique Numbers are: ";
    for(int i=0;i<num;i++)
    {
        cout<<numbers[i]<<" ";
    }
}