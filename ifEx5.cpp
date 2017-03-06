#include <iostream>

int main()
{
  std::cout <<"Enter an integer: ";
  int x;
  std::cin >> x;

  std::cout << "Enter another integer: ";
  int y;
  std::cin >> y;

  if (x > 0 && y > 0) {
    std::cout << "Both numbers are positive\n";
  } else if (x > 0 || y > 0) {
    std::cout << "One of the numbers is positive\n";
  } else {
    std::cout << "Neither number is positive\n";
  }

  return 0;
}
