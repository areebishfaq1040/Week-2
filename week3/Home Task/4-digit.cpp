#include<iostream>
using namespace std;
main()
{
cout<<"Enter four digits number:";
int num;
cin>>num;      

int result;
result=num%10+num/10%10+num/100%10+num/1000%10;
cout<<"Sum of individual digits: "<<result;
}