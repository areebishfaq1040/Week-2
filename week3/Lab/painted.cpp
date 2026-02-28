#include<iostream>
using namespace std;
main()
{
cout<<"Enter area you can paint: ";
int area;
cin>>area;

cout<<"Enter width: ";
int width;
cin>>width;

cout<<"Enter height: ";
int height;
cin>>height;

int totalWallsPainted;
totalWallsPainted=area/(width*height);
cout<<"Number of Walls you can paint: "<<totalWallsPainted;
}