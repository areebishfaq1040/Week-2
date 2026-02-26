#include<iostream>
using namespace std;
main()
{
cout<<"Enter Your Name: ";
string p;
cin>>p;

cout<<"Enter the target weight loss in kilogram: ";
float m;
cin>>m;

float o;
o=m*15;
cout<< p <<" will need "<<o <<" days to lose " <<m <<" kg of weight by following the doctor's suggesyions";
}