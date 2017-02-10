#include <iostream>
#include "myMath.h"

int getInteger();
void binaryConverterAndPrint(int input);
void printResult(bool check);

int main()
{
  // gets user input
  int input = getInteger();
  // std::cout << "input is " << input << '\n';
  // process the number
  binaryConverterAndPrint(input);

  return 0;
}

int getInteger()
{
  std::cout << "Enter an integer between 0 and 255: ";
  int input;
  std::cin >> input;
  while ( (input < 0) || (input > 255) ){
    std::cout << "Input exceeds range. It has to be between 0 and 255.\n";
    std::cout << "Enter an integer between 0 and 255: ";
    std::cin >> input;
  }

  return input;
}

void binaryConverterAndPrint(int input)
{
  int binaryForm = 0;
  int base = 2;
  int exp = 7;
  int currentBinary;
  while (exp + 1) {
     currentBinary = intPow(2, exp);

    if (input >= currentBinary) {
      input -= intPow(base, exp);
      printResult(true);
    } else {
      printResult(false);
    }
    // std::cout << "exp " << exp << " currentBinary " << currentBinary << " input " << input << std::endl;
    exp--;

    if (exp % 4 == 3) {
	std::cout << ' ';
    }
  }
  std::cout << '\n';
}
  
void printResult(bool check)
{
  if (check) {
    std::cout << '1';
  } else {
    std::cout << '0';
  }
}
