#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>
#include "PrintMenu.h"
using namespace std;

void GetNumOfWords(const string character) {
  int count = 0;
  int length = character.size();

  // checks each character in the array
  // adds one to the count if there is a space
  for (int i = 0; i < length - 1; i++) {
    if (character[i] == ' ') {
      count++;
    }
  }
  // adds one to the count
  // for each space we will have two words
  count += 1;
  cout << "The word count is: " << count << endl;
}