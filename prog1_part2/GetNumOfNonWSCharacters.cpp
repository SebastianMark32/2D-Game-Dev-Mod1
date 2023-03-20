#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>
#include "PrintMenu.h"

using namespace std;

void GetNumOfNonWSCharacters(const string character_number) {
  
  // initializing the counts 
  int count_char = 0;
  int char_space = 0;
  int count_nonWS = 0;
  int length = character_number.size();

  // counts each white space
  for (int i = 0; i < length; i++) {
    if (character_number[i] == ' ') {
      
      // incrementing count by one for each single white space
      char_space++;
    }
    count_char++;
  }
  cout << "\nNumber of white spaces " << char_space << endl;
  cout << "The number of characters in the word: " << count_char << endl;
  
  // prints the total size (characters of the sentence)
  int total = char_space + count_char;
  cout << "The total number of character is including white spaces (single): "
       << total << endl;

  // this is count all non-white space characters
  for (int i = 0; i < length; i++) {
    if (character_number[i] != ' ' || character_number[i] == '\0') {
      count_nonWS++;
    }
  }
  // printing the total number of non-white spaces
  cout << "All non white space characters: " << count_nonWS << endl;
}
