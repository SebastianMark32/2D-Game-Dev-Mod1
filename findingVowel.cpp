/************************************************
 * This program takes a user input and checks 
 * whether the character is a vowel or not.
 *
 * @author Sebastian Mark
 *
 * C++ 2D Game Develoment
 *
 * Professor Roy
 * ***********************************************/

#include <iostream>
#include <cctype>

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
  std::cout << "Thank you for play the vowel game!" << std::endl;
  break;
} 
char character = userInput[0];

//checking alphabet
if(isalpha(character)){
  vowelCheck(character);
 
 } else std::cout << "Error! Enter a letter" << std::endl;

}

return 0;
}
