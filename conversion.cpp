/**
 * Problem 5 (conversion) - this program takes in the length of something in the
 * form of feet and inches and then outputs the conversion into meters and
 * centimeters.
 */
#include <iostream>
using namespace std;

/**
 * Function that takes in the user input (call-by-reference)
 * @param feet - length in feet
 * @param inches - length in inches
 */
void userInput(int& feet, int& inches) {
  cout << "Enter a length in feet: " << endl;
  cin >> feet;
  cout << "Enter a length in inches: " << endl;
  cin >> inches;
}

/**
 * Function that calculates the feet and converts it into inches to keep the
 * units the same
 * @param  feet  - feet length
 * @param  inches - length in inches
 * @return total inches after converting feet into inches
 */
float calculateFeetToInches(int feet, int inches) {
  float totalInches = feet * 12;
  totalInches += inches;
  return totalInches;
}

/**
 * Function that takes the calculated meters conversion and converts that into
 * centimeters
 * @param  feet - length in feet
 * @param  inches - length in inches
 * @return the length converted to centimeters
 */
float calculateInchesToCentimeters(int feet, int inches) {
  float centi = calculateFeetToInches(feet, inches) * 2.54;
  return centi;
}

/**
 * Function that converts the total inches into meters and cm
 * @param  feet - length in feet
 * @param  inches - length in inches
 * @return inputted length converted into meters and cm
 */
void outputToMetersAndCM(int feet, int inches) {
  float centi = calculateInchesToCentimeters(feet, inches);
  float meters = 0;
  while (centi >= 100) {
    meters += 1;
    centi -= 100;
  }
  cout << "Conversion: " << meters << " meters and " << centi << " cm" << endl;
}

//main method
int main(int argc, char **argv) {
  string input = "";
  int feet = 0;
  int inches = 0;
  //program won't stop running until the user types "exit"
  while (input != "exit") {
    //call to the functions above
    userInput(feet, inches);
    outputToMetersAndCM(feet,inches);
    cout << "If you would like to exit the program, type 'exit'" << endl;
    cin >> input;
  }
  return 0;
}
