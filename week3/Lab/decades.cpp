#include<iostream>
using namespace std;
main()
{
cout<<"Enter the current world population: ";
int population;
cin>>population;

cout<<"Enter the monthly birth rate(number of births per month): ";
int birthRate;
cin>>birthRate;

int P;
P=birthRate*360;

int decades;
decades=P+population;
cout<<"population in three dacades will be:"<<decades;
}