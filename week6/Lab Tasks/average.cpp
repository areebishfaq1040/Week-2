#include <iostream>
using namespace std;
main()
{
    int sum = 0;
    int average = 0;
    float num[5]={1,2,3,4,5};
    for(int x=0;x<=5;x++)
    {
        sum=sum+x;
    }
    average=sum/5;
    cout<<"Sum of First 5 Numbers is: "<<sum<<endl;
    cout<<"Average of First 5 Numbers is: "<<average<<endl;
}