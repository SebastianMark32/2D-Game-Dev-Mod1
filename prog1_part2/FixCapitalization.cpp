#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>
#include "PrintMenu.h"

using namespace std;

void FixCapitalization(string &sentence) {

  // checking base case i.e. first character in the sentence
  sentence[0] = toupper(sentence[0]);
  for (int i = 0; i < sentence.size(); i++) {

    // checks if the sentence ends with punctuation
    // then adding one to find the first character of the new sentence
    if (sentence[i] == '.' || sentence[i] == '!' ||
        sentence[i] == '?' && sentence[i] != tolower(sentence[i])) {
      sentence[i + 2] = toupper(sentence[i + 2]);
    }
    if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?') {
      sentence[i + 1] = toupper(sentence[i + 1]);
    }
  }
  cout << sentence << endl;
}
