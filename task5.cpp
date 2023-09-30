#include<iostream>
using namespace std;

void possibleBonus(int position, int Fposition);

main()
{
   int position, Fposition;
   cout << "Enter your position: ";
   cin >> position;
   cout << "Enter your friend's position: ";
   cin >> Fposition;
   possibleBonus(position, Fposition);
}
void possibleBonus(int position, int Fposition)
{
   int Difference;
   Difference=Fposition-position;
   if(Difference <= 6){
   cout << "true";
   }
   if(Difference > 6){
   cout << "false";
   }
}
