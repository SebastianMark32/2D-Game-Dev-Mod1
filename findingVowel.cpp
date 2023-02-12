/**
 * This program will ask the user to enter a character 
 * The v
 *
 *
 *@author Sebastian Mark
 *
 *
 */


#include <iostream>

void vowelCheck(char vowel){
  
  // checking for lower case vowels
  if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel =='u'){
   
    std::cout << "This character is lower case vowel" << std::endl;
 
    // checking for upper case vowels
  } else if ( vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel =='U'){
   
    std::cout << "This character is an UPPER case vowel" << std::endl;
 

  // if not an upper or lower caser vowel then its a consonant
  } else std::cout << "This character is a consonant" << std::endl;
}
int main(){

  std::string userInput;

// prompting user input until exit flag
while(true){
  
  // Taking a char input from a user
  std::cout << "Enter a character: " << std::endl;
  std::cin >> userInput;
   
  // I do not think -1 exit flag is possible since we are using chars
  if(userInput == "-1"){
    std::cout << "Thank you for playing!" << std::endl;
    return 0;
}

  char vowel = userInput[0];
  vowelCheck(vowel); //always being executed until vowel = 1


  }
}
