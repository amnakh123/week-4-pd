#include<iostream>
using namespace std;

void tpChecker(int people, int tp);

main()
{
 int people,tp;
 cout << "Number of people in the household: ";
 cin >> people;
 cout << "Number of rolls of TP: ";
 cin >> tp;
 tpChecker(people, tp);
}
void tpChecker(int people, int tp)
{
  if(people > tp){
  float days=(500*tp)/(people*57);
  cout << "Your TP will only last "<<days<<" days, buy more!";
  }
  if(people < tp){
  float days=(500*tp)/(people*57);
  cout << "Your TP will last "<<days<<" days, no need to panic!";
  }
}
