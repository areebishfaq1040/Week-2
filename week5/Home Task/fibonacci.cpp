#include <iostream>
using namespace std;
main()
{
    int a=0,b=1,n,x,y;
    cout<<"Enter the Lenth of fibonacci: ";
    cin>>n;
    x=a;
    y=b;
    for(int i=1;i<=n;i++)
    {   
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
    
    }
}