#include<iostream>
using namespace std;
main()
{
    int num;
    string chords[100];
    cout<<"Enter the number of chords: ";
    cin>>num;
    cout<<"Enter "<<num<<" chords, one per line:"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>chords[i];
    }
    for(int i=0;i<num;i++)
    {
        int length=0;
        for(int j=0;chords[i][j]!='\0';j++)
        {
            length=length+1;
        }
        if(chords[i][length-1]!='7')
        {
            cout<<chords[i]<<"7";
        }
        else
        {
            cout<<chords[i];
        }
        if(i<num-1)
        {
            cout<<", ";
        }
    }
}