#include <iostream>
using namespace std;
int main(){int holidays,diff,minutes;
    cout<<"Enter Holidays: ";
    cin>>holidays;
    minutes=(365-holidays)*63+(holidays*127);
diff=30000-minutes;
if(minutes>30000)
{cout<<"Tom Sleep well"<<endl;
cout<<diff <<" minutes less for play";}
if(minutes<=30000)
{cout<<"Tom will run away"<<endl;
cout<<diff <<" minutes for play";}
}