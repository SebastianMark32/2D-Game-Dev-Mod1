/******************************************************************************
 * This program checks if a user inputs a character whether its a              *
 * uppercase,lowercase vowel or consonant. The prompt will continue to ask     *
 * for user input (character e.g. a,e,i,o,c,v,b,....) until the user enters 0  *
 *                                                                             *
 * Programming Assignment (PA) 2                                               *
 *                                                                             *
 * @author Sebastian Mark                                                      *
 *                                                                             *
 * C++ 2D Game Devlopment                                                      *
 *                                                                             *
 * Instructor: Professor Roy                                                   *                                                                          *
 *******************************************************************************/

#include <cctype>
#include <iostream>

using namespace std;

// checking ACII value for upper case vowel
void vowelCheckingUpper(char character) {
  if (character == 65 || character == 69 || character == 73 ||
      character == 79 || character == 85) {
    cout << "Upper case vowel" << endl;
  }
}

// checking ASCII value for lower case vowel
void vowelCheckingLower(char character) {

  if (character == 97 || character == 101 || character == 105 ||
      character == 111 || character == 117) {
    cout << "Lower case vowel" << endl;
  }
}

// checking range non ASCII vowel values
void consonantChecking(char character) {

  if (character >= 66 && character <= 68 ||
      character >= 70 && character <= 72 ||
      character >= 74 && character <= 78 ||
      character >= 80 && character <= 84 ||
      character >= 86 && character <= 90) {
    cout << "Upper case consonant" << endl;
  }

  else if (character >= 98 && character <= 100  ||
           character >= 102 && character <= 104 ||
           character >= 106 && character <= 110 ||
           character >= 112 && character <= 116 ||
           character >= 118 && character <= 122) {
    cout << "Lower case consonant" << endl;
  }
}

// checking user if user input is a alphabet
void notVowelOrConsonant(char character) {
  if (!isalpha(character)) {
    cout << "Not a alphabet character" << endl;
  }
}

int main() {

  // prompts user input
  char character;
  do {
    cout << "Enter a character (to exit enter 0): " << endl;
    cin >> character;
    vowelCheckingUpper(character);
    vowelCheckingLower(character);
    consonantChecking(character);
    notVowelOrConsonant(character);

  } while (character != '0'); // exits if user inputs 0

  return 0;
}
