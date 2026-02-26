#include<iostream>
using namespace std;
main()
{ 
cout<<"Enter Your Student's Name:\n";
string name;
cin>>name;

cout<<"Enter Matric Marks (out of 1100):\n";
int matric;
cin>>matric;

cout<<"Enter Inter Marks (out of 1200):\n";
int inter;
cin>>inter;


cout<<"Ecat Marks (out of 400):\n";
int ecat;
cin>>ecat;

float M=(10.0/1100)*matric;

float I=(40.0/1200)*inter;

float E=(50.0/400)*ecat;
float aggregate;
aggregate=M+I+E;
cout<<" Aggregate score is" <<aggregate <<"%"; 
}
