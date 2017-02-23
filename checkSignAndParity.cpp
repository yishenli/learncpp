#include <iostream>

int main()
{
  std::cout << "Enter an integer: ";
  int value;
  std::cin >> value;

  if (value > 0) {
    if ((value % 2) == 0) {
      std::cout << value << " is positive and even" << std::endl;
    } else  {
      std::cout << value << " is positive and odd" << std::endl;
    }
  }

  return 0;
}
