#include <iostream>
using namespace std;
main(){
    cout<<"Enter the number: ";
    int num,even;
    cin>>num;
    even=num%2;
    if(even==0){
        cout<<"The Number is even ";
    }else{cout<<"The number is odd";}
}