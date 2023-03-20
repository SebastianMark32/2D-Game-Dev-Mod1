#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>
#include "PrintMenu.h"
using namespace std;


void PrintMenu(string sentence) {

  char menu_select;

  do {

    // Menu for the user
    cout << "Enter a character to pick the current editor " << endl;
    cout << "To know the word count enter (C) " << endl;
    cout << "To know the number of white spaces enter (W) " << endl;
    cout << "To fix Capitalization enter (F) " << endl;
    cout << "To replace (!) with a (.) enter (R) " << endl;
    cout << "To reduce double white spacing enter (S) " << endl;
    cout << "To quit enter q or Q " << endl;

    cout << "Enter a character now\n " << endl;
    cin >> menu_select;

    // allows the user to select a function to edit the sentence
    switch (menu_select) {

    case 'C':
      GetNumOfWords(sentence);
      cout << "\n" << endl;
      break;

    case 'W':
      GetNumOfNonWSCharacters(sentence);
      cout << "\n" << endl;
      break;

    case 'F':
      FixCapitalization(sentence);
      cout << "\n" << endl;
      break;

    case 'R':
      ReplaceExclamation(sentence);
      cout << "\n" << endl;
      break;

    case 'S':
      ShortenSpace(sentence);
      cout << "\n" << endl;

    case 'q': {
      cout << "Thank you for using my program!" << endl;
      break;
    }

    case 'Q': {
      cout << "Thank you for using my program!" << endl;
      break;
    }

    default: {
      cout << "Enter a valid character \n" << endl;
    }
    }

    // exits the menu if the user enters Q or q
  } while ((menu_select != 'Q') && (menu_select != 'q'));
}