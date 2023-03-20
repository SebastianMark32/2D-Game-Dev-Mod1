#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>
#include "PrintMenu.h"

using namespace std;

void ShortenSpace(string sentence) {
  
  // storing the size of the object
  size_t position;
  
  // !nopos is used to find a match in the string
  // replace function will replace all double spaces with a single space
  while ((position = sentence.find("  ")) != string::npos) {
    sentence.replace(position, 2, " ");
  }
  cout << sentence << endl;
}