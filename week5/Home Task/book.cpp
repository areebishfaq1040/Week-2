#include<iostream>
using namespace std;
main()
{
    string book="";
    int choice;
    for(int i=1;i<=10;i++)
    {
    cout<<"1 Add Books\n";
    cout<<"2 View Books\n";
    cout<<"3 Borrow Books\n";
    cout<<"4 Issue Books\n";
    cout<<"5 Exit\n";
    cout<<"Enter Choice: ";
    cin>>choice;
        if(choice==1)
        {
        cout<<"Enter Book Name: ";
        cin>>book;
        cout<<"Book Added Succesfully\n\n";
        }
        else if(choice==2)
        {
        cout<<"Book: "<<book<<endl<<endl;
        }
        else if(choice==3)
        {
        if(book!="")
            {
            cout<<"Book Borrowed: "<<book<<endl;
            book="";
            }
            else
            {
            cout<<"No Book Available\n\n";
            }
        }
        else if(choice==4)
        {
            if(book!="")
            {
            cout<<"Issued Book: "<<book<<endl;
            book="";
            }
            else
            {
             cout<<"No Book Available\n\n";
            }
        }
        else if(choice==5)
        {
        cout<<"Program End\n\n";
        break;
        }
        else
        {
        cout<<"Invalid Choice\n\n";
        }
    }
}