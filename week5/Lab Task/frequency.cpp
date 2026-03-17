#include <iostream>
using namespace std;
int main()
{
    int num,digit,count=0;
     cout<<"Enter Numbers: ";
     cin>>num;
     cout<<"Enter Digit: ";
     cin>>digit;
     for(int i=num;i>0;i=i/10)
    {
        int num2=i%10;
           if (num2==digit)
        {
            count=count+1;
        }
    }
    cout<<"Frequency of "<<digit<<" in "<<num<<" is "<<count;
}