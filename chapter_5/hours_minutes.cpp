#include <iostream>
#include <iomanip>

int main(){

// converts hours to minutes 
float hour, minutes;

std::cout << "Enter hours:" << std::endl;
std::cin >> hour;
minutes = hour * 60;
std::cout << std::setprecision(2) << std::endl;
std::cout << "Hr: " << hour << "\nMinutes: " << minutes << std::endl; 

return 0;
}
