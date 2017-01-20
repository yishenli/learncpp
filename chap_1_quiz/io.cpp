#include <iostream>

int readNumber()
{
  int x;
  std::cout << "Please enter an integer: ";
  std::cin >> x;
  return x;
}

void writeAnswer(int x)
{
  std::cout << "The sum of the two integers is: " << x << std::endl;
}
