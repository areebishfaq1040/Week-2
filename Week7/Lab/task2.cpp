#include <iostream>
using namespace std;
void sum(int number1,int number2);
int main()
{
    int num1,num2;
    cout<<"Enter First Number: " ;
    cin>>num1;
    cout<<"Enter  Second NUmber: " ;
    cin>>num2;
    sum(num1,num2);
}


    void sum(int number1, int number2)
    {
        cout<<"sum "<<number1+number2;
    }
