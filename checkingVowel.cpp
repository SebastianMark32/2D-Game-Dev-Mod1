/**************************************************
 * This program takes a user input and checkes 
 * whether a character is a vowel or consonant
 * or some other character that is not defined
 * as an alaphabet character.
 *
 *  @author Sebastian Mark
 *
 * C++ 2D Game Development 
 *
 * Professor Roy
 * ***********************************************/

#include <iostream>

void vowelCheck(char vowel){

  if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel =='u'){
   
    std::cout << "This character is lower case vowel" << std::endl;
  
  } else if ( vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel =='U'){
   
    std::cout << "This character is an UPPER case vowel" << std::endl;
  
  } else if (!isalpha(vowel)) {
    std::cout << "Not a valid character" << std::endl;
  } else std::cout << "consonant" << std::endl;
}
int main(){

char vowel;
std::cout << "Enter a character: " << std::endl;
std::cin >> vowel;
vowelCheck(vowel);

  return 0;
}
