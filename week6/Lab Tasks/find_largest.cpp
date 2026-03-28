#include <iostream>
using namespace std;
main()
{
    int num;
    int numbers[100];
    cout<<"Enter the Number of Elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" Numbers, One Per Line:"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>numbers[i];
    }
    int max=numbers[0];
    for(int i=0;i<num;i++)
    {
        if(numbers[i]>max)
        {
            max=numbers[i];
        }
    }
    cout<<"Largest Number is: "<<max;
}