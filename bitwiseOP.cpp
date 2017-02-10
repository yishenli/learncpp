#include <iostream>

int main()
{
  unsigned int x = 4;
  unsigned int y;
  y = x << 1;
  std::cout << y << '\n';

  y = ~x;
  std::cout << y << '\n';
  std::cout << sizeof(y) << '\n';

  return 0;
}
