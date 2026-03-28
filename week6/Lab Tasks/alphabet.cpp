#include<iostream>
using namespace std;
main()
{
    string word;
    int sum=0;
    char alphabet;
    bool found=false;
    cout<<"Enter the word: ";
    getline(cin,word);
    cout<<"Enter the alphabet you want to find: ";
    cin>>alphabet;
    for(int x=0;word[x]!='\0';x++)
    {
        if (word[x]==alphabet)
        {
            found=true;
            break;
        }
    } 
    if (found==true)
    {
        cout<<alphabet<<" is found in "<<word;
    }
    else
    {
        cout<<alphabet<<" is not found in "<<word;
    }
}