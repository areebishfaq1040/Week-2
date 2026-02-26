#include<iostream>
using namespace std;
main()
{
cout<<"Enter paint area: ";
int p;
cin>>p;

cout<<"Enter width: ";
int m;
cin>>m;

cout<<"Enter height: ";
int n;
cin>>n;

int o;
o=p/(m*n);
cout<<"Walls painted = "<<o;
}