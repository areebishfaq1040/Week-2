#include<iostream>
using namespace std;
main()
{
cout<<"Enter Imposter: ";
int i;
cin>>i;

cout<<"Enter Players: ";
int p;
cin>>p;

int chances;
chances=(i/p)*100;
cout<<"Chance = "<<chances <<"%" ;
}