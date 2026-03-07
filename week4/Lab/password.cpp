#include<iostream>
using namespace std;
main(){string myPassword;
    myPassword="Password@!123";
    cout<<"Enter Password: ";
    string pass;
    cin>>pass;
    if(pass=="Password@!123"){
        cout<< "Wow, You cracked the password";
    }else{cout<<"Hahahahah, It is not simply that, Try Again";}
}