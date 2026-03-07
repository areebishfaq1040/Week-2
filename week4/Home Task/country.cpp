#include <iostream>
using namespace std;
main(){
    string country;
    int ticket;
    cout<<"Enter Country Name: ";
    cin>>country;
    cout<<"Enter Ticket Price in dollers: ";
    cin>>ticket;
    if(country=="Ireland")
 {int discount10;
discount10=ticket-(ticket*10/100);
cout<<"Your Discounted Price is: "<<discount10;}  
else{
    int discount5;
    discount5=ticket- (ticket*5/100);
    cout<<"Your Discounted Price: "<<discount5;
}
}