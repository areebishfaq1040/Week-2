#include<iostream>
using namespace std;
main()
{
cout<<"Enter vegetable price per kilogram (in coins):";
float vegPrice;
cin>>vegPrice;

cout<<"Enter fruit price per kilogram (in coins):";
float fruitPrice;
cin>>fruitPrice;  

cout<<"Enter total kilogram of vegetables: ";
float kgVeg;
cin>>kgVeg;  

cout<<"Enter total kilogram of fruits: ";
float kgFruit;
cin>>kgFruit;      

float totalEarning;
totalEarning=(kgVeg*vegPrice+fruitPrice*kgFruit)/1.94;
cout<<"Total earnings in Rupees (Rps): "<<totalEarning;
}