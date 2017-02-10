// Checks if user input is odd or even

#include <iostream>

int getInteger();
void isEven(int input);

int main()
{
  int input = getInteger();
  isEven(input);

  return 0;
}

int getInteger()
{
  std::cout << "Enter an integer: ";
  int input;
  std::cin >> input;
  return input;
}

void isEven(int input)
{
  if (input % 2){
    std::cout << "The integer is odd.\n";
  } else {
    std::cout << "The integer is even. \n";
  }
}
