#include<iostream>
using namespace std;
main()
{
    int choice;
    for(int i=1;i<=10;i++)
    {
        cout<<"1 View Food Menu\n";
        cout<<"2 Place Order\n";
        cout<<"3 View Order Status\n";
        cout<<"4 Generate Bill\n";
        cout<<"5 Contact Staff\n";
        cout<<"6 Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;
        if(choice==1)
        {
        cout<<"You selected: View Food Menu\n\n";
        }
        else if(choice==2)
        {
        cout<<"You selected: Place Order\n\n";
        }
        else if(choice==3)
        {
        cout<<"You selected: View Order Status\n\n";
        }
        else if(choice==4)
        {
        cout<<"You selected: Generate Bill\n\n";
        }
        else if(choice==5)
        {
        cout<<"You selected: Contact Staff\n\n";
        }
        else if(choice==6)
        {
        cout<<"Exiting Restaurant Management System. Thank you!\n";
        break;
        }
        else
        {
        cout<<"Invalid Choice\n\n";
        }
    }
}