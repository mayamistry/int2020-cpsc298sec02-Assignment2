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
 * Function that converts the total inches into meters
 * @param  feet - length in feet
 * @param  inches - length in inches
 * @return inputted length converted into meters
 */
float calculateToMeters(int feet, int inches) {
  float meters = (calculateFeetToInches(feet, inches)) * (0.0254);
  return meters;
}

/**
 * Function that takes the calculated meters conversion and converts that into
 * centimeters
 * @param  feet - length in feet
 * @param  inches - length in inches
 * @return the length converted to centimeters
 */
float calculateToCentimeters(int feet, int inches) {
  float centi = calculateToMeters(feet, inches) * 100;
  return centi;
}

/**
 * Function that outputs the converted lengths that were calculated
 * @param convMeters - length conversion in meters
 * @param convCm - length converted in centimeters
 */
void consoleOutput(float convMeters, float convCm) {
  cout << "Conversion to meters: " << convMeters << endl;
  cout << "Conversion to centimeters: " << convCm << endl;
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
    consoleOutput(calculateToMeters(feet, inches), calculateToCentimeters(feet, inches));
    cout << "If you would like to exit the program, type 'exit'" << endl;
    cin >> input;
  }
  return 0;
}
