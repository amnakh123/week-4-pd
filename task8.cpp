#include<iostream>
using namespace std;

void pet(int holidays);

main()
{ 
   int holidays;
   cout << "Holidays: ";
   cin >> holidays;
   pet(holidays);
}
void pet(int holidays)
{
   if(holidays < 100){
   cout << "Tom sleeps well"<<endl;
   int workingDays=365-holidays;
   int timeforgames=(workingDays*63)+(holidays*127);
   float difference=(30000-timeforgames)/60;
   float minutes=(30000-timeforgames)-(difference*60);
   cout <<difference<<" hours and "<<minutes<<" minutes less for play";
   }
   if(holidays > 100){
   cout << "Tom will run away"<<endl;
    int workingDays=365-holidays;
   int timeforgames=(workingDays*63)+(holidays*127);
  float difference=(30000-timeforgames)/60;
   float minutes=(30000-timeforgames)-(difference*60);
   cout <<difference<<" hours and "<<minutes<<" minutes for play";
  }
}