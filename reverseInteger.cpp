#include <iostream>

int main() {

  int userInput;
  int reversed = 0;
  int remainder;
  std::cout << "Enter an integer: ";
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
