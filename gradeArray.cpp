/******************************************************
 * This program takes a user input and calculates the
 * average grade amongst five inputs.
 *
 *  @author Sebastian Mark
 *
 *  C++ 2D Game development
 *
 * Professor Roy
 * ***************************************************/

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {

  float grade[5];
  float sum = 0.0;
  float average = 0.0;

  // Taking user input
  std::cout << "Enter a grade " << std::endl;
  for (int i = 1; i <= 5; i++) {

    std::cout << "Grade:" << i << std::endl;
    std::cin >> grade[i];

    // summing the first i indicies
    // summing the first 5 elements starting from 0 until 4
    sum += grade[i];
  }

  float size = sizeof(grade) / sizeof(grade[0]);

  // dividing by the total elements in the array i.e., 5
  average = sum / size;

  // truncating the decimals values four places
  std::cout << std::setprecision(4) << std::endl;

  // printing average
  std::cout << "The average is: " << average << std::endl;

  return 0;
}
