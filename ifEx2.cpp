#include <iostream>

int main()
{
  std::cout << "Enter a number: ";
  int x;
  std::cin >> x;

  if (x > 10) {
    std::cout << "You have entered: " << x << '\n';
    std::cout << x << " is greater than 10\n";
  } else {
    std::cout << "You have entered: " << x << '\n';
    std::cout << x << " is not greater than 10\n";
  }

  return 0;
}
