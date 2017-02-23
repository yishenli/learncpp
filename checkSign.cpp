#include <iostream>

int main()
{
  std::cout << "Enter an interger: ";
  int value;
  std::cin >> value;

  if (value >= 0) {
    std::cout << value << " is a positive integer (or zero)" << std::endl;
    std::cout << "Double this number is " << value * 2 << std::endl;
  } else {
    std::cout << value << " is a negative integer" << std::endl;
    std::cout << "The positive of this number is " << -value << std::endl;
  }

  return 0;
}
