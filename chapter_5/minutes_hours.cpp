/******************************************
 *This is the last problem in the textbook
 It asks to convert minutes into hours 
 * ************************************/

#include <iostream>
#include <iomanip>

using namespace std;

float converterMachine(float minutes){

float hours;
hours = minutes / 60;

return hours;
}

int main(){

float minutes;
cout << "Enter minutes:" << endl;
cin >> minutes;
cout << std::setprecision(3) << endl;

if(minutes >= 0){

  float hours = converterMachine(minutes);
  cout << "Minutes:" << minutes << "\nHours: " << hours << endl;

} else cout << "Error! Time cannot be negative" << endl;

return 0;
}
