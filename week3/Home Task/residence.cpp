#include<iostream>
using namespace std;
main()
{
cout<<"Enter the person's age:";
int age;
cin>>age;

cout<<"Enter the number of times they've moved:";
int moved;
cin>>moved;       

int sum;
sum=age/(moved+1);
cout<<"Sum of individual digits: "<<sum;
}