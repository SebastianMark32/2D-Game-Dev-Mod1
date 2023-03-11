/**********************************************************
 * Airport info: this program allows the user
 * to choose between airport 1 and 2, which then
 * will print out all of their flight information.
 *
 * @author Sebastian Mark
 *
 * C++ 2D Game Dev
 * *************************************************************/

#include <iostream>

using namespace std;

// Flight information
struct flight {

  int flight_number[5];
  string original_code[5];
  string destination_code[5];
  int departure_time[5];
  int arrival_time[5];
};

// Storing flight infor from JFK airport
void flightOne() {

  flight flight_info;

  flight_info.flight_number[0] = 123;
  flight_info.original_code[0] = "JFK";
  flight_info.destination_code[0] = "LAX";
  flight_info.departure_time[0] = 140;
  flight_info.arrival_time[0] = 745;

  cout << "\nAirport JFK flight info:" << endl;
  cout << "Flight #" << flight_info.flight_number[0] << endl;
  cout << "Original airport code: " << flight_info.original_code[0] << endl;
  cout << "Airport destination code: " << flight_info.destination_code[0]
       << endl;
  cout << "Departure time: " << flight_info.departure_time[0] << endl;
  cout << "Arrival time: " << flight_info.arrival_time[0] << endl;
}

// Storing flight two information from JFK airport
void flightTwo() {

  flight flight_info;

  flight_info.flight_number[1] = 155;
  flight_info.original_code[1] = "JFK";
  flight_info.destination_code[1] = "HUS";
  flight_info.departure_time[1] = 530;
  flight_info.arrival_time[1] = 830;

  cout << "\nAirport JFK flight info:" << endl;
  cout << "Flight #" << flight_info.flight_number[1] << endl;
  cout << "Original airport code: " << flight_info.original_code[1] << endl;
  cout << "Airport destination code: " << flight_info.destination_code[1]
       << endl;
  cout << "Departure time " << flight_info.departure_time[1] << endl;
  cout << "Arrival time: " << flight_info.arrival_time[1] << endl;
}

// Storing flight information from LAX airport 
void flightThree() {

  flight flight_info;

  flight_info.flight_number[2] = 555;
  flight_info.original_code[2] = "LAX";
  flight_info.destination_code[2] = "ATL";
  flight_info.departure_time[2] = 720;
  flight_info.arrival_time[2] = 215;

  cout << "\nAirport LAX flight info:" << endl;
  cout << "Flight #" << flight_info.flight_number[2] << endl;
  cout << "Original airport code: " << flight_info.original_code[2] << endl;
  cout << "Airport destination code: " << flight_info.destination_code[2]
       << endl;
  cout << "Departure time " << flight_info.departure_time[2] << endl;
  cout << "Arrival time: " << flight_info.arrival_time[2] << endl;
}

// Storing second flight information from LAX
void flightFour() {

  flight flight_info;

  flight_info.flight_number[4] = 333;
  flight_info.original_code[4] = "LAX";
  flight_info.destination_code[4] = "SPI";
  flight_info.departure_time[4] = 115;
  flight_info.arrival_time[4] = 645;

  cout << "\nAirport LAX flight info:" << endl;
  cout << "Flight #" << flight_info.flight_number[4] << endl;
  cout << "Original airport code: " << flight_info.original_code[4] << endl;
  cout << "Airport destination code: " << flight_info.destination_code[4]
       << endl;
  cout << "Departure time " << flight_info.departure_time[4] << endl;
  cout << "Arrival time: " << flight_info.arrival_time[4] << endl;
}

int main() {

  string airport;

  // Promting for user input
  cout << "Enter airport jkf or lax (lower case): " << endl;
  cin >> airport;

  // Allowing the user to pick between airport #1 and #2 (JFK or LAX)
  // Calling each method based on user input
  if (airport == "jfk") {

    flightOne();
    flightTwo();
  
  } else if (airport == "lax"){
    
    flightThree();
    flightFour();
  }

  return 0;
}
