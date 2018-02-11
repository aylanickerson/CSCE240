/* Copyright 2018 */

// Include the C limits system library for INT_MAX const variable
#include <climits>
// using INT_MAX

// Include the iostream system library for cout and endl.
#include <iostream>
// Introduce cout and endl from std namespace to this file's scope.
using std::cout;
using std::endl;

int main(int args, char** argv) {
  // Create a constant char variable to for the printable tab character.
  const char tab = '\t';

  // Create a signed int variable and assign it the largest signed int for
  //   this machine.
  int s_int = INT_MAX;
  // Display the message "s_int:<tab><s_int value><newline>"
  cout << "s_int:" << tab << tab << s_int << endl;
  // Display the message "s_int:<tab><s_int value> + 1<newline>"
  cout << "s_int + 1:" << tab << s_int + 1 << endl;

  // Create an usigned int variable and assign it s_int's value with a static
  //    cast.
  unsigned int u_int = static_cast<unsigned int>(s_int);
  // Display the message "u_int:<tab><u_int value><newline>"
  cout << "u_int:" << tab << tab << u_int << endl;
  // Display the message "u_int:<tab><u_int value> + 1<newline>"
  cout << "u_int + 1:" << tab << u_int + 1 << endl;

  // Create a boolean and assign it the value of u_int + u_int - 2.0*s_int == 0
  bool truth = u_int + u_int - 2.0*s_int == 0;
  // Display "u_int + u_int - 2.0*s_int == 0 : <truth_value><newline>"
  cout << "u_int + u_int - 2.0*s_int == 0 : " << truth << endl;

  // Create a single precision floating point value called garbage
  float garbage;
  // Display garbage's value as "garbage value is <garbage_value><newline>"
  cout << "garbage value is " << garbage << endl;
}

