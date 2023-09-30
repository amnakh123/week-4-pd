#include<iostream>
using namespace std;

void Reverse(string trueORfalse);
main()
{
   string trueORfalse;
   cout << "Enter 'true' or 'false': ";
   cin >> trueORfalse;
   Reverse(trueORfalse);
}
void Reverse(string trueORfalse)
{
    if(trueORfalse == "false"){
   cout << "true";
   }
       if(trueORfalse == "true"){
    cout << "false";
    }
}