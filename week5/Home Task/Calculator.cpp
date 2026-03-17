#include<iostream>
using namespace std;
main()
{
    int a,b,choice;
    for(int i=1;i<=6;i++)
    {
        cout<<"1 Addition\n";
        cout<<"2 Subtraction\n";
        cout<<"3 Multiplication\n";
        cout<<"4 Division\n";
        cout<<"5 Clear Screen\n";
        cout<<"6 Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;
        if(choice==1)
        {
        cout<<"Enter Two Numbers: ";
        cin>>a>>b;
        cout<<"Sum = "<<a+b<<"\n\n";
        }
        else if(choice==2)
        {
        cout<<"Enter Two Numbers: ";
        cin>>a>>b;
        cout<<"Difference = "<<a-b<<"\n\n";
        }
        else if(choice==3)
        {
        cout<<"Enter Two Numbers: ";
        cin>>a>>b;
        cout<<"Product = "<<a*b<<"\n\n";
        }
        else if(choice==4)
        {
            cout<<"Enter Two Numbers: ";
            cin>>a>>b;
            if(b==0)
            {
            cout<<"Cannot divide by zero\n\n";
            }
            else
            {
            cout<<"Division = "<<a/b<<"\n\n";
            }
        }
        else if(choice==5)
        {
        cout<<"Screen cleared\n\n";
        }
        else if(choice==6)
        {
        cout<<"Exiting Calculator. Goodbye!\n";
        break;
        }
        else
        {
        cout<<"Invalid Choice\n\n";
        }
    }
}