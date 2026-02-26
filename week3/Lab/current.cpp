#include<iostream>
using namespace std;
main()
{cout<<"Enter the charge (Q) in coulombs";
int coulombs;
cin>>coulombs;

cout<<"Enter the time (t) in seconds:";
int time;
cin>>time;

int current;
current=coulombs/time;
cout<<"The current I is ="<<current;
}