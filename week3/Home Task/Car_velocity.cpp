#include<iostream>
using namespace std;
main()
{
cout<<"Enter Initial Velocity (m/s): ";
int p;
cin>>p;

cout<<"Enter Acceleration (m/s^2): ";
int m;
cin>>m;

cout<<"Enter Time (s): ";
int n;
cin>>n;

int o;
o=p+m*n;
cout<<"Final velocity (m/s):"<<o;
}