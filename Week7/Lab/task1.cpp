#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
    float a,b,c,discriment;
    cout<<"Enter the value of number a: ";
    cin>>a;
    cout<<"Enter the value of number b: ";
    cin>>b;
    cout<<"Enter the Value of number c:";
    cin>>c;
    discriment=pow(b,2)-4*a*c;
    if (discriment>0||discriment==0)
    {
        float disc1,disc;
        disc=(-b/(2*a));
        disc1=sqrt(discriment)/(2*a);
        cout<<"Solution X = "<<disc<<" solution X = "<<disc1;
    }
}
