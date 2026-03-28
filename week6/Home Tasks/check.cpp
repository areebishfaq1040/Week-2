#include<iostream>
using namespace std;
main()
{
    int n;
    string names[100];
    char letter;
    int count=0;
    cout<<"Enter number of customers: ";
    cin>>n;
    cout<<"Enter the names of "<<n<<" customers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>names[i];
    }
    cout<<"Enter a letter to check: ";
    cin>>letter;
    for(int i=0;i<n;i++)
    {
        if(names[i][0]==letter)
        {
            count=count+1;
        }
    }
    cout<<"Total names starting with '"<<letter<<"': "<<count<<endl;
}