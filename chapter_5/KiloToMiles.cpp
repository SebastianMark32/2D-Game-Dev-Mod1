/********************************************
 * This program converts kilometers to miles
 * given a user input.
 *
 *  @author Sebastian Mark
 * ****************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

float kilo_to_miles(float kilometers){

float converter = kilometers * 0.621371;

return converter;
}


int main(){

  float input;
  std::cout << "Enter kilometers:" << std::endl;
  std::cin >> input;

  float miles = kilo_to_miles(input);
  
  std::cout << std::setprecision(4) << std::endl;

  std::cout << "Kilometers: " << input << "\nMiles: " << miles << std::endl;



  return 0; 
}
