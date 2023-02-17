/***************************************************************************
 * Fibonacci is a recursion relation that will sum the two previous numbers.
 * The user will give an input and sum the first n Fibonacci numbers
 *
 * * WARNING* after the 40th Fibonacii number the compilation really slows down
 *
 * @author Sebastian Mark
 *
 * C++ 2D Game Development
 *
 * Professor Roy
 ***************************************************************************/

#include <iostream>

int fibo(int numb1) {
  // checking the first two base cases for fib(1), fib(2)
  // otherwise recursively iterating
  if (numb1 == 0) {
    return 0;
  } else if (numb1 == 1) {
    return 1;
  } else
    return fibo(numb1 - 1) + fibo(numb1 - 2);
}

int main() {

  // taking user input for the ith fib number
  int fibNumb;
  int i = 0;
  std::cout << "How many fibonacci numbers would you like? " << std::endl;
  // taking user input
  std::cin >> fibNumb;
 
  // prints fib(i) to console
  while (i <= fibNumb) {
    std::cout << "Fibonacci of " << i << " = " << fibo(i) << "\n " << std::endl;
    i++;
  }

  return 0;
}
