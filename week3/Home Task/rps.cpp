#include<iostream>
using namespace std;
main()
{
cout<<"Enter vegetable price per kilogram (in coins):";
float a;
cin>>a;

cout<<"Enter fruit price per kilogram (in coins):";
float b;
cin>>b;  

cout<<"Enter total kilogram of vegetables: ";
float c;
cin>>c;  

cout<<"Enter total kilogram of fruits: ";
float d;
cin>>d;      

int e;
e=c*a+b*d/1.94;
cout<<"Total earnings in Rupees (Rps): "<<e;
}