#include <iostream>

int main() {

  int userInput, reversed = 0, remainder;

  std::cout << "Enter an integer: ";
  std::cin >> userInput;

  while(userInput != 0) {

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
