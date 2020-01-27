/**
 * Problem 1 (intarray) - This program takes in nonnegative numbers and puts
 * it into an array. If a value is negative, the program ends and prompts to
 * restart.
 */
#include <iostream>
using namespace std;

int main(int argc, char**argv) {
  const int SIZE = 10;
  int numberArray[SIZE] = {};
  int temp = 0;
  //takes the declared array and puts in nonnegative integers only
  for (int i = 0; i < SIZE; ++i) {
    cout << "Enter a nonnegative number: " << endl;
    cin >> temp;
    if (temp > 0) {
      numberArray[i] = temp;
    } else {
      cout << "Invalid. Please try again." << endl;
      return 0;
    }
  }

  //Prints out the components of the array
  cout << "Array of nonnegative integers: ";
  for (int i = 0; i < SIZE; ++i) {
    cout << numberArray[i] << " ";
  }
  cout << endl;
  return 0;
}
