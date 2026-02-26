#include<iostream>
using namespace std;
main()
{
cout<<"Enter Imposter count: ";
int p;
cin>>p;

cout<<"Enter Player Count : ";
int m;
cin>>m;

int o;
o=100*p/m;
cout<<"chance of being an imposter:"<<o <<"%";
}