#include <iostream>
using namespace std;
int main(){
    int temp1,temp2,diff;
    cout<<"Enter Temperature 1: ";
    cin>>temp1;
    cout<<"Enter Temperature2: ";
    cin>>temp2;
    diff=temp1-temp2;
    if(diff<0)
    diff=-diff;
    if(diff>10)
 {
cout<<"Difference is too Big \nProgram End";}  
else{
    cout<<"Program End ";
}
}