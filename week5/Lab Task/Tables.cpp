#include <iostream>
using namespace std;
int main()
{
     cout<<"Multiplication Table of 24"<<endl;
     for(int i=24;i<25;i=i+1)
    {
        for(int j=1;j<=10;j+=1)
      {
       int k=i*j;
        cout<<i<<"x"<<j<<"="<<k<<endl;
      }
    }
    cout<<"\n";
    cout<<"Multiplication Table of 50"<<endl;
    for(int i=50;i<51;i+=1)
    {
        for(int j=1;j<=10;j+=1)
        {
            int k=i*j;
            cout<<i<<"x"<<j<<"="<<k<<endl;
        }
    }
    cout<<"\n";
    cout<<"Multiplication Table of 29"<<endl;
    for(int i=29;i<30;i+=1)
    {
        for(int j=1;j<=10;j+=1)
        {
            int k=i*j;
            cout<<i<<"x"<<j<<"="<<k<<endl;
        }
    }
}