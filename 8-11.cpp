/**********************************
 * 8 X 8 checkerboard grid
 *
 * Problem 8.1 in the textbook
 *
 * @author Sebastian Mark
 *
 * C++ 2D Game Dev
 * ******************************/

#include <iostream>
#include <string>

using namespace std;

void checkerboard(int height, int spacing) {
  for (int i = 0; i < height + 1; i++) {

    for (int j = 0; j < spacing; j++) {
      cout << "+-----";
    }
    cout << "+\n";
      for (int k = 0; k < 3; k++) {
        for(int l = 0; l < spacing; l++){
          cout << "|     ";
        }
        cout << "|\n";
      }
    }
  for (int j=0; j < height; j++) {
    cout << "+-----";
  
  }
    cout << "+\n" << endl;
  }

int main() {

  int height;
  int width;

  cout << "Enter height: " << endl;
  cin >> height;
  cout << "Enter width: " << endl;
  cin >> width;

  checkerboard(height, width);

  return 0;
}
