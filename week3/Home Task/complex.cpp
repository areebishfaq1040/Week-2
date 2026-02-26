#include<iostream>
using namespace std;
main()
{
cout<<"Enter number 1:";
float num1;
cin>>num1;

cout<<"Enter number 2:";
float num2;
cin>>num2;  

cout<<"Enter number 3: ";
float num3;
cin>>num3;  

cout<<"Enter number 4: ";
float num4;
cin>>num4;
      
cout<<"Enter number 5: ";
float num5;
cin>>num5;

float FirstFiveAdd;
FirstFiveAdd=num1+num2+num3+num4+num5;

cout<<"Enter number 6:";
float num6;
cin>>num6;

cout<<"Enter number 7:";
float num7;
cin>>num7;  

cout<<"Enter number 8: ";
float num8;
cin>>num8;  

cout<<"Enter number 9: ";
float num9;
cin>>num9;
      
cout<<"Enter number 10: ";
float num10;
cin>>num10;

float NextFiveMultiply;
NextFiveMultiply = num6*num7*num8*num9*num10;
     
cout<<"Enter number 11:";
float num11;
cin>>num11;

cout<<"Enter number 12:";
float num12;
cin>>num12;  

cout<<"Enter number 13: ";
float num13;
cin>>num13;  

cout<<"Enter number 14: ";
float num14;
cin>>num14;
      
cout<<"Enter number 15: ";
float num15;
cin>>num15;

float NextFiveSubtract;
NextFiveSubtract=num11-num12-num13-num14-num15;

float addMultiplyAddition;
addMultiplyAddition=FirstFiveAdd+NextFiveMultiply;

float finalResult;
finalResult=addMultiplyAddition-NextFiveSubtract;

cout<<"The Final Result is: "<<finalResult;
}