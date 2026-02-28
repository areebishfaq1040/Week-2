#include <iostream>
using namespace std;
main()
{
cout<< "Enter the size in Megabytes(MB): ";
int mb;
cin>>mb;
int bits;
bits=mb*1024*1024*8;
cout<< mb <<" is equivalent to " <<bits <<" bits";
}