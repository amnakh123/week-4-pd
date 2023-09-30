#include<iostream>
using namespace std;

void AirlineCampany(string countryName, float price);

main()
{
 string countryName;
 cout << "Enter the country's name: ";
 cin >> countryName;
 float price;
 cout << "Enter the ticket price in dollars: $";
 cin >> price;
 
 AirlineCampany(countryName, price);
}
void AirlineCampany(string countryName, float price)
{
  if(countryName == "Pakistan"){
  price=price-(price*5/100);  
   }
 
  if(countryName == "Ireland"){
  price=price-(price*10/100);  
   }
    if(countryName == "England"){
  price=price-(price*30/100);  
   }
     if(countryName == "Canada"){
  price=price-(price*45/100);  
   }
   if(countryName == "India"){
  price=price-(price*20/100);  
   }
   if(countryName == "Canada"){
  price=price-(price*45/100);  
   }
 cout << "Final ticket price after discount: $"<<price;
 
}