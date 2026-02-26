#include<iostream>
using namespace std;
main()
{
cout<<"Enter the movie name:";
string a;
cin>>a;

cout<<"Enter the adult ticket price:";
float b;
cin>>b;  

cout<<"Enter the child ticket price: ";
float c;
cin>>c;  

cout<<"Enter the number of adult tickets sold: ";
float d;
cin>>d;      
cout<<"Enter the number of child tickets sold: ";
float e;
cin>>e;      

cout<<"Enter the percentage of amount to be donated to charity: ";
float f;
cin>>f; 

cout<<"----------------------------------------------\n" <<"Movie: " <<a <<"\n";
int g;
g=b*d+c*e;
cout<<"Total Amount generated from ticket sales : " <<g <<"\n";
int h;
h=15*g/100;
cout<<"Donation to charity(15): " <<h <<"\n";
int i;
i=g-h;
cout<<"Remaining amount after donation: " <<i; 
}