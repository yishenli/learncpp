#include <iostream>

int main()
{
  std::cout << "Enter a number: ";
  int x;
  std::cin >> x;

  if (x > 10) {
    if (x <= 20) {
      std::cout << x << " is between 10 an 20 (inc.)\n";
    } else {
      std::cout << x << " is greater than 20\n";
    }
  } else {
    std::cout << x << " is less than 10\n";
  }

  return 0;
}
