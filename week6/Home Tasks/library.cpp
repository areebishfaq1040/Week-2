#include<iostream>
#include<string>
using namespace std;
main()
{
    string books[100];
    int status[100];
    int count=0;
    int choice=0;
    string borrowName;
    while(choice!=5)
    {
        cout<<"1. Add Books"<<endl;
        cout<<"2. View Books"<<endl;
        cout<<"3. Borrow Books"<<endl;
        cout<<"4. View Books"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==1)
        {
            int n;
            cout<<"How many books do you want to add? ";
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cout<<"Enter "<<i+1<<" book name: ";
                cin>>books[i];
                status[i]=1;
                count=i+1;
            }
            cout<<"Books Added Successfully"<<endl;
        }
        else if(choice==2 || choice==4)
        {
            for(int i=0;i<count;i++)
            {
                cout<<books[i]<<" - ";
                if(status[i]==1)
                {
                    cout<<"Available"<<endl;
                }
                else
                {
                    cout<<"Borrowed"<<endl;
                }
            }
        }
        else if(choice==3)
        {
            cout<<"Enter book name to borrow: ";
            cin>>borrowName;
            int found=0;
            for(int i=0;i<count;i++)
            {
                if(books[i]==borrowName)
                {
                    found=1;
                    if(status[i]==1)
                    {
                        status[i]=0;
                        cout<<"Book Borrowed Successfully"<<endl;
                    }
                    else
                    {
                        cout<<"Book is already Borrowed"<<endl;
                    }
                }
            }
            if(found==0)
            {
                cout<<"Book Not Found"<<endl;
            }
        }
    }
}