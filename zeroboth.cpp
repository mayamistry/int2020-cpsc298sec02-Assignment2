/**
 * Problem 3 (zeroboth) - created a void method that takes two integers and
 * makes both of their values 0. They final values get outputted
 */
#include <iostream>
using namespace std;

/**
 * Function that takes in two paramters through call-by-reference and sets
 * the two values to 0
 * @param a - integer number 1
 * @param b - integer number 2
 */
void zeroBoth(int& a, int& b) {
  a = 0;
  b = 0;

  cout << "First number: " << a << endl;
  cout << "Second number: " << b << endl;
}

//main method
int main(int argc, char**argv) {
  int num1;
  int num2;
  cout << "Enter a number: " << endl;
  cin >> num1;
  cout << "Enter a second number: " << endl;
  cin >> num2;
  //call to the function
  zeroBoth(num1, num2);

  return 0;
}
