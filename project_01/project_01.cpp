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
#include <fstream>
#include <iostream>
#include <string>

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

void ReplaceExclamation(string sentence) {

  // replaces the character ! with .
  for (int i = 0; i < sentence.size(); i++) {
    if (sentence[i] == '!') {
      sentence[i] = '.';
    }
  }
  cout << sentence << endl;
}

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

int main() {

  string sentence;
  string line;

  char user_input;

  cout << "Would you like to read text from a file or enter into the console? "
       << endl;
  cout << "For console enter (c) for text file enter (f): " << endl;
  cin >> user_input;

  if (user_input == 'f') {
    // reading from a file
    ifstream text_file("file.txt");
    getline(text_file, line);
    cout << "**********Reading from a file (file.txt)************" << endl;
    cout << line << endl;
    cout << "**************************" << endl;

    PrintMenu(line);

  } else if (user_input == 'c') {
    cout << "Enter a string: " << endl;
    // getline allows the user to enter full sentences
    getline(cin, sentence);
    cout << "\n" << endl;
   //PrintMenu(sentence);
  }
   PrintMenu(sentence);
  return 0;
}
