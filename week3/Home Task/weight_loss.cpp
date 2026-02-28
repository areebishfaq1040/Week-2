#include<iostream>
using namespace std;
main()
{
cout<<"Enter Your Name: ";
string name;
cin>>name;

cout<<"Enter the target weight loss in kilogram: ";
float targetWeight;
cin>>targetWeight;

float requiredDays;
requiredDays=targetWeight*15;
cout<< name <<" will need "<<requiredDays <<" days to lose " <<targetWeight <<" kg of weight by following the doctor's suggesyions";
}