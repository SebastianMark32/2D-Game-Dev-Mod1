#include <exception>
#include <iostream>


void fibonacci(){

  int oldNum,currenNum,nextNum;
  oldNum = currenNum =1;

  std::cout << "\n";

  while(currenNum <= 100){
    std::cout << "Fib: " << currenNum << '\n';
    nextNum = currenNum + oldNum;

    oldNum = currenNum;
    currenNum = nextNum;
  }
}

int main(){

  fibonacci();

  return 0;
}
