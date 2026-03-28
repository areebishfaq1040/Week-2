#include<iostream>
using namespace std;
main()
{
    string input;
    cout<<"Enter a string: ";
    getline(cin,input);
    cout<<"String with vowels removed: ";
    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'||input[i]=='A'||input[i]=='E'||input[i]=='I'||input[i]=='O'||input[i]=='U')
        {
        }
        else
        {
            cout<<input[i];
        }
    }
}