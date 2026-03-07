#include <iostream>
using namespace std;
main(){
    cout<<"Enter the first Number: ";
    int num1,num2;
    cin>>num1;
    cout<<"Enter the second Number: ";
    cin>>num2;
    if(num1>num2){
        cout<< num1 <<" is greater then "<<num2;
    }else{cout<<num2<<" is greater then "<<num1;}
}