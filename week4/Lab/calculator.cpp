#include<iostream>
using namespace std;
int main()
{
    int num1,num2,add,subtract,divide,multiply;
    char op;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter operator: ";
    cin>>op;
    cout<<"Enter Second Number: ";
    cin>>num2;
if (op=='+') {
subtract=num1-num2;
 cout<<num1<<"-"<<num2<<"="<<subtract;
 }
 if (op=='-') {
multiply=num1*num2;
 cout<<num1<<"*"<<num2<<"="<<multiply;
 }
 if (op=='*') {
divide=num1/num2;
 cout<<num1<<"/"<<num2<<"="<<divide;
 }
if(op=='/') {
 add=num1+num2;
 cout<<num1<<"/"<<num2<<"="<<add;
 }
}
