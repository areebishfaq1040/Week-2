#include<iostream>
using namespace std;
main()
{
cout<<"Enter four digits number:";
int a;
cin>>a;      

int e;
e=a%10+a/10%10+a/100%10+a/1000%10;
cout<<"Sum of individual digits: "<<e;
}