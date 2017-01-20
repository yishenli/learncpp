#include <iostream>

void doPrint()
{
  std::cout << "in doPrint()" << std::endl;
}

int main()
{
  std::cout << "Starting main()" << std::endl;
  doPrint();
  std::cout << "Ending main()" << std::endl;

  return 0;
}
