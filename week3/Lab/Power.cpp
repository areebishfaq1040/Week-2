#include<iostream>
using namespace std;
main()
{cout<<"Enter the voltage (in Volts):";
int v;
cin>>v;

cout<<"Enter current (in Ampares):";
float t;
cin>>t;

float w;
w=v*t;
cout<<"The power P is "<<w;
}