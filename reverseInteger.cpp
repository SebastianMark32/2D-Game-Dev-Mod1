/**********************************************************************
 *This program takes an integer value and reverses the order.
 *
 *Note: For a more exciting results the user input should range from
 *input < 0 or input > 9.
 *
 * @author Sebastian Mark
 *
 * C++ 2D Game Dev
 *
 * Professor Roy
 * ********************************************************************/

#include <iostream>

int main() {

  // user input
  int userInput;
  int reversed = 0;
  int remainder;
  std::cout << "Enter an integer: ";
  std::cin >> userInput;

  while (true) {

    if (userInput == 0) {
      break;
    }

    /***********************
     * If userInput = 25
     * 1) reverse = 0
     * 2) 25 mod 10 = 2 (remainder)
     * 3) reverse = 0*10 + 5 = 5
     * 4) 25 / 10 = 2 (Integer division)
     *
     *  Repeate
     *
     *  Now userInput = 2
     *  1) reverse  = 5
     *  2) 2 mod 10 = 2
     *  3) reverse = 5*10 + 2 = 52
     *  userInput = 0 break while loop
     **************************/
    remainder = userInput % 10;
    reversed = reversed * 10 + remainder;

    // decrements by div 10 each iteration until 0
    userInput /= 10;
  }

  std::cout << reversed;

  return 0;
}
