#include <iostream>
using namespace std;
main(){
    string gm;
    float num;
    cout<<"Enter Geomatric Figures: ";
    cin>>gm;
    if(gm=="Square")
    {int sq;
        cout<<"Enter Square number: ";
        cin>>sq;
        sq=sq*sq;
        cout<<sq;}
    if(gm=="Rectangle")
    {int l,w;
        cout<<"Enter length: ";
        cin>>l;
        cout<<"Enter Width";
        cin>>w; 
        num=l*w;
        cout<<num;}
    if(gm=="Circle")
    {float r;
        cout<<"Enter radius: ";
        cin>>r; 
        num=3.14*r;
        cout<<num;}
    if(gm=="Triangle")
    {int b,h;
        cout<<"Enter base: ";
        cin>>b;
        cout<<"Enter Height: ";
        cin>>h; 
        num=1/2.0*b*h;
        cout<<num;}
}