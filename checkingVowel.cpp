#include <iostream>

void vowelCheck(char vowel){

  if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel =='u'){
   
    std::cout << "This character is lower case vowel" << std::endl;
  
  } else if ( vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel =='U'){
   
    std::cout << "This character is an UPPER case vowel" << std::endl;
  
  } else std::cout << "This character is a consonant" << std::endl;
}
int main(){

char vowel;
std::cout << "Enter a character: " << std::endl;
std::cin >> vowel;
vowelCheck(vowel);

  return 0;
}
