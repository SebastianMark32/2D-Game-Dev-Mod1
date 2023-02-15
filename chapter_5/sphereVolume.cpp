/**********************************************************
 * This program will take input from a user i.e., radius 
 * and calculte the volume of a sphere (4/3*π*r^3).
 *
 *Chapter 5 from the C++ text book
 *
 * @author Sebastian Mark
 * *******************************************************/

#include <cctype>
#include <iostream>

using namespace std;

float sphereVolume(float radius){

float volume;
float pi = 3.14;

volume = (4*pi*(radius*radius*radius))/3;

return volume;

 }
int main(){

  float userInput;
  float total_volume;
  cout << "Please enter a radius(ex 1.0):" << endl;
  cin >> userInput;

 total_volume = sphereVolume(userInput);

 cout << "The volume of a sphere = " << total_volume << " with raidus:" << userInput;
 
  return 0;
}
