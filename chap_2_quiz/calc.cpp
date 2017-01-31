// This program performs simple calculations from user input.
// Users are prompted for two inputs and a sign for the calculation.
// If the user enters an invalid symbol, the program should print nothing.

#include <iostream>

int main()
{
  // prompts for first input
  std::cout << "Enter a double value: ";
  double x;
  std::cin >> x;
  // prompts for second input
  std::cout << "Enter a second double value: ";
  double y;
  std::cin >> y;
  // prompts for symbol input
  std::cout << "Enter one of the followings: +, -, *, or /: ";
  char cSymbol;
  std::cin >> cSymbol;
  // check symbol and performs calculation
  double dResult;
  if (cSymbol == '+'){
    dResult = x + y;
  } else if (cSymbol == '-'){
    dResult = x - y;
  } else if (cSymbol == '*'){
    dResult = x * y;
  } else if (cSymbol == '/'){
    dResult = x / y;
  } else {
    return -1;
  }
  
  std::cout << x << cSymbol << y << " is " << dResult << std::endl;

  return 0;
}
