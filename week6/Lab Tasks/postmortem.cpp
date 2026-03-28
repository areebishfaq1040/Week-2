#include<iostream>
using namespace std;
main()
{
    int sum=0;
    string word;
    cout<<"Enter a Word: ";
    getline(cin,word);
for (int x=0;word[x]!='\0'; x++)
{
    sum=sum+1;
}
sum=sum-1;
while (sum>=0)
{
    cout<<word[sum];
    sum=sum-1;
}
}