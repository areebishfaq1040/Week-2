#include<iostream>
using namespace std;
main()
{
cout<<"Enter the current world population: ";
int p;
cin>>p;

cout<<"Enter the monthly birth rate(number of births per month): ";
int m;
cin>>m;

int P;
P=m*360;

int o;
o=P+p;
cout<<"population in three dacades will be:"<<o;
}