#include <iostream>
using namespace std;
main()
{
    int sum=0,num;
    for(int i=1;i>=0;i++)
    {
        cout<<"Enter Number: ";
        cin>>num;
        if (num<0)
        {
          break;
        }
        sum=sum+num;
    }
     cout<<"Total Sum is: "<<sum;
}