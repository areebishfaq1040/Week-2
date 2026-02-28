#include<iostream>
using namespace std;
main()
{
cout<<"Enter the movie name:";
string movie;
cin>>movie;

cout<<"Enter the adult ticket price: ";
float adultTicket;
cin>>adultTicket;  

cout<<"Enter the child ticket price: ";
float childTicket;
cin>>childTicket;  

cout<<"Enter the number of adult tickets sold: ";
float adultTicketSold;
cin>>adultTicketSold;    
  
cout<<"Enter the number of child tickets sold: ";
float childTicketSold;
cin>>childTicketSold;      

cout<<"Enter the percentage of amount to be donated to charity: ";
float charity;
cin>>charity; 

cout<<"----------------------------------------------\n" <<"Movie: " <<movie <<"\n";

int totalSales;
totalSales=adultTicket*adultTicketSold+childTicket*childTicketSold;
cout<<"Total Amount generated from ticket sales : " <<totalSales <<"\n";

int donation;
donation=charity*totalSales/100;
cout<<"Donation to charity(" <<charity <<"%): " <<donation <<"\n";

int remaining;
remaining=totalSales-donation;
cout<<"Remaining amount after donation: " <<remaining; 
}