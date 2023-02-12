/***************************************************************************
 * Fibonacci is a recursion relation that will sum the two previous numbers
 * The user will give an input of how the sum of the first n Fibonacci numbers
 * 
 * * WARNING* after the 40th Fibonacii number the compilation reall slows down
 *
 * @author Sebastian Mark
 *
 * C++ 2D Game Development 
 *
 * Professor Roy
 ***************************************************************************/

#include <iostream>

int fibo(int numb1){

if(numb1 == 0){
  return 0;
} else if (numb1 == 1){
  return 1;
} else 
  return fibo(numb1-1) + fibo(numb1-2);
}

int main(){ 

  int fibNumb;
  int i = 0;
  std::cout << "Enter a Fibonacci number [f(n)]: " << std::endl;
  std::cin >> fibNumb;
  while(i <= fibNumb){
    std::cout << fibo(i) << " ";
    i++;
  }

  return 0;
}