#include <iostream>

int main()
{
  const int max = 9;
  int outer = 1;

  while (outer <= max)
  {
    for (int i = 0; i < max - outer; ++i)
    {
      std::cout << "  ";
    }

    int inner = 1;
    while (inner <= outer)
    {
      std::cout << inner << ' ';
      ++inner;
    }
    std::cout << '\n';
    ++outer;
  }     
  
  return 0;
}
