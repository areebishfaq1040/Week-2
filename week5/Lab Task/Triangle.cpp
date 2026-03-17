#include <iostream>
using namespace std;
main()
{
string username,studentName,courseName;
int password,choice,studentAge;
for(int i=1;i<=3;i+=1)
{
    cout<<"Enter Username: ";
    cin>>username;
    cout<<"Enter Password: ";
    cin>>password;
    if(username=="admin" && password==1234)
    {
        cout<<"Login Successful \n\n";
        break;
    }
    else
    {
        if(i==3)
        {
            cout<<"Too Many Wrong Attempts. Program End.\n\n";
            return 0;
        }
        cout<<"Wrong Login/Password \n";
    }

}
for(int i=1;i<=4;i+=1)
{
    cout<<"-------University Management System--------\n";
    cout<<"1- Add Student \n";
    cout<<"2- View Student \n";
    cout<<"3- Add Course \n";
    cout<<"4- Exit \n\n";
    cout<<"Enter Choice: ";
    cin>>choice;

if(choice==1)
{
    cout<<"Enter Student Name: ";
    cin>>studentName;
    cout<<"Enter Student Age: ";
    cin>>studentAge;
    cout<<"Student Added Succesfully \n\n";
}
else if(choice==2)
{
    string checkName;
    cout<<"Enter Student Name: ";
    cin>>checkName;
    if(checkName==studentName)
    {
        cout<<"Student Name: "<<studentName<<endl;
        cout<<"Student Age: "<<studentAge<<endl;
    }
    else
    {
        cout<<"No Student Found Record \n\n";
    }
}
else if(choice==3)
    {
        cout<<"Enter Course name: ";
        cin>>courseName;
        cout<<"Course Add successfuly. \n\n";
    }
else if(choice==4)
{
    cout<<"Program Exit\n\n";
    break;
}    
else 
{
    cout<<"invalid Choice \n\n";
}
}
}