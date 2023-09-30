#include<iostream>
using namespace std;
 
void flowerShop(int redRose, int whiteRose, int tulip, float totalPrice);

main()
{
   int redRose, whiteRose, tulip;
   cout << "Red Rose: ";
   cin >> redRose;
   cout << "White Rose: ";
   cin >> whiteRose;
   cout << "Tulips: ";
   cin >> tulip;
   float totalPrice=(redRose*2)+(whiteRose*4.1)+(tulip*2.5);
   cout << "Original Price: $"<<totalPrice<<endl;
   flowerShop(redRose, whiteRose, tulip, totalPrice);
}
void flowerShop(int redRose, int whiteRose, int tulip, float totalPrice)
{
     float Discount;
    if(totalPrice > 200){
    Discount=totalPrice-(totalPrice*20/100);
    cout << "Price after Discount: $"<<Discount;
   }
    if(totalPrice < 200){
    cout << "No discount applied.";
   }
}
    
     