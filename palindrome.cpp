#include <iostream>

using namespace std;

void isPalindrome(){
  
  int number, remainder, quotient;
  int result = 0;

  cout << "Enter a number" << endl;
  cin >> number;

  quotient = number;

  while(quotient != number){
    remainder = quotient%10;
    result = result * 10 + remainder;
    quotient = quotient/10;
  } if (result == 0){
    cout << "Palindrome!" << endl;
  } else cout << "Not palindrome" << endl;
  
}

int main(){


isPalindrome();
  

return 0;
}
