#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a Word: ";
    getline(cin,word);
    char alphabets[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (int x=0;word[x]!='\0'; x++)
    {
        for (int i=0;i<26;i++)
        {
            if (word[x]==alphabets[i])
            {
                cout<<alphabets[i+1];
                break;
            }
            
        }
        
    }
}