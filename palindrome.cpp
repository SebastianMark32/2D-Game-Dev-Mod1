/*******************************************************************
 *This program checks if a word is a palindrome.
 *Example:  tacocat can be read from right to left or left to right.
 *
 * *Note: I added two break statements, otherwise 
 * the printout will replicated based on the size of the word. 
 * Its kind of a ducktape approach, however I think it works.
 *
 * **Disclaimer** I have seen this problem many times and
 * during my ISP I did this problem in C. Therefore, I cannot take 
 * credit for my alogrithm. 
 *
 * @author Sebastian Mark
 *
 * C++ 2D Game Development
 *
 * Professor Roy
 * ****************************************************************/

#include <cstring>
#include <iostream>
#include <string>

void isPalindrome(char string[]) {

  // divides the character array in half
  int middle = strlen(string)/2;
  
  
  int length = strlen(string);
  
  // iterates through each element until the mid-point
  for (int i = 0; i < middle; i++) {

  // checking if the elements are not equal 
  // through the entire array
    if (string[i] != string[length - i - 1]) {
      std::cout << "Not a palindrome" << std::endl;
      
      // reduce duplicates
      break;
    } else
      std::cout << "Palindrome!" << std::endl; break;
  }
}

int main() {

  char word[100];
  while (true) {
    std::cout << "Enter a word into the palindrome 3000:" << std::endl;
    std::cin >> word;

    // exit flag to break out of the loop
    if (strcmp(word, "N") == 0 || strcmp(word, "n") == 0) {
      break;
    }

    isPalindrome(word);
  }

  return 0;
}
