#include<iostream>
using namespace std;
main()
{
cout<<"Enter Minutes: ";
int min;
cin>>min;

cout<<"Enter fps: ";
int fps;
cin>>fps;

int total;
total=min*60*fps;
cout<<"Total number of Frames :"<<total;
}