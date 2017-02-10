// demonstrate the effects of pre- and post- increment/decrement operators

#include <iostream>

int main()
{
  int x = 5, y = 5;
  std::cout << x << " " << y << std::endl;
  std::cout << ++x << " " << --y << std::endl;
  std::cout << x << " " << y << std::endl;
  std::cout << x++ << " " << y-- << std::endl;
  std::cout << x << " " << y <<std::endl;

  return 0;
}
