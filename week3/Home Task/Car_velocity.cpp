#include<iostream>
using namespace std;
main()
{
cout<<"Enter Initial Velocity (m/s): ";
int vi;
cin>>vi;

cout<<"Enter Acceleration (m/s^2): ";
int a;
cin>>a;

cout<<"Enter Time (s): ";
int t;
cin>>t;

int vf;
vf=vi+a*t;
cout<<"Final velocity (m/s):"<<vf;
}