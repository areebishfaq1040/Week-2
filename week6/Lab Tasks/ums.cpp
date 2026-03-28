#include<iostream>
using namespace std;
main()
{
    string username,password;
    int login=0;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter Username: ";
        cin>>username;
        cout<<"Enter Password: ";
        cin>>password;
        if(username=="admin" && password=="1234")
        {
            cout<<"Login Successful"<<endl;
            login=1;
            break;
        }
        else
        {
            cout<<"Login Failed"<<endl;
        }
    }
    if(login==1)
    {
        string student_names[3];
        int student_ages[3];
        int student_count=0;
        string course_names[3];
        int course_count=0;
        int choice=0;
        while(choice!=5)
        {
            cout<<"1 Add Student"<<endl;
            cout<<"2 View Students"<<endl;
            cout<<"3 Add Course"<<endl;
            cout<<"4 View Courses"<<endl;
            cout<<"5 Exit"<<endl;
            cin>>choice;
            if(choice==1)
            {
                if(student_count<3)
                {
                    cout<<"Enter Name: ";
                    cin>>student_names[student_count];
                    cout<<"Enter Age: ";
                    cin>>student_ages[student_count];
                    student_count=student_count+1;
                    cout<<"Student Added Successfully"<<endl;
                }
                else
                {
                    cout<<"Limit Full"<<endl;
                }
            }
            else if(choice==2)
            {
                for(int i=0;i<student_count;i++)
                {
                    cout<<student_names[i]<<" "<<student_ages[i]<<endl;
                }
            }
            else if(choice==3)
            {
                if(course_count<3)
                {
                    cout<<"Enter Course: ";
                    cin>>course_names[course_count];
                    course_count=course_count+1;
                    cout<<"Course Added Successfully"<<endl;
                }
                else
                {
                    cout<<"Limit Full"<<endl;
                }
            }
            else if(choice==4)
            {
                for(int i=0;i<course_count;i++)
                {
                    cout<<course_names[i]<<endl;
                }
            }
        }
    }
}