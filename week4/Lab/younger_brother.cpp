#include<iostream>
using namespace std;

int main()
{
    string nam1,nam2,nam3;
    int age1,age2,age3;
    cout<<"Enter the name of first brother: ";
    cin>>nam1;
    cout<<"Enter the age of first brother: ";
    cin>>age1;
    cout<<"Enter the name of second brother: ";
    cin>>nam2;
    cout<<"Enter the age of second brother: ";
    cin>>age2;
    cout<<"Enter the name of third brother: ";
    cin>>nam3;
    cout<<"Enter the age of third brother: ";
    cin>>age3;
    if(age1<age2,age1<age3)
    {cout<<nam1<<" is younger";}
     if(age2<age3,age2<age1)
    {cout<<nam2<<" is younger";}
     if(age3<age1,age3<age2)
    {cout<<nam3<<" is younger";}
}