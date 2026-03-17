#include <iostream>
using namespace std;
int main(){
int a,b,x,y;
cout<<"Enter First Number: ";
cin>>a;
cout<<"Enter Second Number: ";
cin>>b;
x=a;
y=b;
while(a!=b)
{
if(a>b)
{a=a-b;}
else
{b=b-a;}
}
cout<<"HCF: "<<a<<endl;
cout<<"LCM: "<<(x*y)/a;
}