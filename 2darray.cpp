/**
 * Problem 2 (2darray) - program that takes in 20 values and puts into a 2darray
 * of 4 rows and 5 columns. It then prints out the 2darray into four lines
 * with 5 elements each.
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  const int NUM_ROWS = 4;
  const int NUM_COLS = 5;
  int a [NUM_ROWS][NUM_COLS];
  //Fill in array
  int temp = 0;
  for (int i = 0; i < NUM_ROWS; ++i) {
    for (int j = 0; j < NUM_COLS; ++j) {
      cout << "Input a number: ";
      cin >> temp;
      a[i][j] = temp;
    }
  }

  //prints out the array into 4 lines
  for (int i = 0; i < NUM_ROWS; ++i) {
    for (int j = 0; j < NUM_COLS; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
