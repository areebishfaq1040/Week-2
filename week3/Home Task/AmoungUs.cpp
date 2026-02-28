#include<iostream>
using namespace std;
main()
{
cout<<"Enter Imposter count: ";
int imposter;
cin>>imposter;

cout<<"Enter Player Count : ";
int player;
cin>>player;

int chance;
chance=100*imposter/player;
cout<<"chance of being an imposter:"<<chance <<"%";
}