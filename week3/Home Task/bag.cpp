#include<iostream>
using namespace std;
main()
{
cout<<"Enter the size of bag in pounds: ";
int p;
cin>>p;

cout<<"Enter the cost of bag: ";
float m;
cin>>m;  

cout<<"Enter the area in square feet that can be covered by the bag: ";
float n;
cin>>n;      

float o;
o=m/p;
cout<<"cost of fertilizer per pound:"<<o <<endl;

float i;
i=m/n;
cout<<"cost of fertilizing per square foot:"<<i;
}