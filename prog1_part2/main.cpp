 /****************************************************************************
 * Project 01:
 *
 * This program allows the user to edit a sentence or 
 * find out information about the characteristics of a sentence. 
 * Meaning, they can either replace a ! with a . (period) 
 * or eliminate all extra spaces (double spaces). Also, if the user
 * wantes to know how many words, single white spaces or total characters,
 * they can just enter a character (C, W, F, R, S) from the menu and the 
 * result will print to the console. 
 *
 * @author Sebatian Mark
 * 
 * C++ 2D Game Developement
 *
 * ***************************************************************************/

#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>
#include "PrintMenu.h"

using namespace std;

int main() {

  string sentence;
  cout << "Enter a string: " << endl;
 
  // getline allows the user to enter full sentences
  getline(cin, sentence);
  cout << "\n" << endl;

  PrintMenu(sentence);

  return 0;
}