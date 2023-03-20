#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>
#include "PrintMenu.h"

using namespace std;


void ReplaceExclamation(string sentence) {

  // replaces the character ! with .
  for (int i = 0; i < sentence.size(); i++) {
    if (sentence[i] == '!') {
      sentence[i] = '.';
    }
  }
  cout << sentence << endl;
}