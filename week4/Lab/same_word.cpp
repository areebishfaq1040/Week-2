#include <iostream>
using namespace std;
main(){
    cout<<"Enter the first Name: ";
    string name1,name2;
    cin>>name1;
    cout<<"Enter the second Name: ";
    cin>>name2;
    if(name1==name2){
        cout<< "yes, The Words are same";
    }else{cout<<"No, The Words are not same";}
}