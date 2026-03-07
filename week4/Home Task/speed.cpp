#include <iostream>
using namespace std;
main(){
    float speed;
    cout<<"Enter Speed: ";
    cin>>speed;

    if(speed<=10)
    {cout<<"slow";}
    if(speed<=50)
    {cout<<"average";}
    if(speed<=150)
    {cout<<"fast";}
    if(speed<=1000)
    {cout<<"Ultra fast";}
    else
    {cout<<"Extremely fast";}
}