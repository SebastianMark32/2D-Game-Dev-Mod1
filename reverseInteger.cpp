/***********************************************
 *This program takes in a string (greater than 9)
 * 0 < input <= 9 is not exciting and reverses the
 * integers.
 *
 *@author Sebastian Mark
 * C++ 2D Game Dev
 * Professor Roy
 * **********************************************/

#include <iostream>

int main() {

  int userInput;
  int reversed = 0;
  int remainder;
  std::cout << "Enter an integer > 9: ";
  std::cin >> userInput;

  while(true) {
    
    if(userInput == 0){
      break;
    }
    remainder = userInput % 10;
    reversed = reversed * 10 + remainder;
    userInput /= 10;
  }

  std::cout << reversed;

  return 0;
}
