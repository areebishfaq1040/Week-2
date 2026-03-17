#include<iostream>
using namespace std;
main(){
float n,x,c1=0,c2=0,c3=0,c4=0,c5=0;
cout<<"Enter Number Count: ";
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<"Enter Number: ";
cin>>x;
if(x<200)c1++;
else if(x<=399)c2++;
else if(x<=599)c3++;
else if(x<=799)c4++;
else if(x>=800)c5++;
}
float p1=(c1*100.0)/n;
float p2=(c2*100.0)/n;
float p3=(c3*100.0)/n;
float p4=(c4*100.0)/n;
float p5=(c5*100.0)/n;
cout<<p1<<"%"<<endl;
cout<<p2<<"%"<<endl;
cout<<p3<<"%"<<endl;
cout<<p4<<"%"<<endl;
cout<<p5<<"%"<<endl;
}