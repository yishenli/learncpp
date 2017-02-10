#include <iostream>

int main()
{
  int x = 5;
  int y = 7;

  if(!(x == y))
    std::cout << "x does not equal to y\n";
  else
    std::cout << "x equals to y\n";

  std::cout << "Enter a number: ";
  int value;
  std::cin >> value;

  if (value == 0 || value == 1)
    std::cout << "You have picked 0 or 1\n";
  else
    std::cout << "You did not pick 0 or 1\n";

  if (value > 10 && value < 20)
    std::cout << "Your value is between 10 and 20\n";
  else
    std::cout << "Your value is not between 10 and 20\n";

  // you can use != to mimic XOR
  
  return 0;
}
