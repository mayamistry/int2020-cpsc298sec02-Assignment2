/**
 * Problem 1 (salestax) - this program takes in two inputs: tax rate and cost
 * before tax. The function addTax calulcates the after tax cost and outputs it.
 */
#include <iostream>
using namespace std;

/**
 * Function that adds tax of the cost price of an item
 * @param  taxRate - sales tax rate
 * @param  cost - initial cost of the function
 * @return the cost after including tax
 */
float addTax(float taxRate, float cost) {
  taxRate = taxRate / 100;
  float afterTaxCost = (taxRate * cost) + cost;
  return afterTaxCost;
}

//main method
int main(int argc, char **argv) {
  float rate = 0;
  float costBeforeTax = 0;
  //takes in the information and outputs the value from the addTax function
  cout << "Enter a tax rate (as a percent): " << endl;
  cin >> rate;
  cout << "Enter the cost of an item before tax: " << endl;
  cin >> costBeforeTax;
  cout << "Cost after tax: $" << addTax(rate, costBeforeTax) << endl;

  return 0;
}
