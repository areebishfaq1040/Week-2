#include<iostream>
using namespace std;
main()
{
    int n;
    string names[100],temp;
    cout<<"Enter number of students: ";
    cin>>n;
    cout<<"Enter names of "<<n<<" students:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>names[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(names[i]>names[j])
            {
                temp=names[i];
                names[i]=names[j];
                names[j]=temp;
            }
        }
    }
    cout<<"Students in alphabetical order:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<names[i]<<endl;
    }
}