/******************************************
 * This program check if its a leap year.
 * Leap years happen every 4 years.
 *
 * @author Sebastian Mark
 *
 * C++ 2D Game Development
 *
 * Professor Roy
 * ****************************************/


#include <iostream>

void leapYearChecker(int year){

if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
  std::cout << "This year is a leap year" << std::endl;
} else std::cout << "Not a leap year" << std::endl;

}

int main(){

  int year;
  std::cout << "Enter a year:" << std::endl;
  std::cin >> year;
  leapYearChecker(year);

return 0;
}
