#include <iostream>

int calculate()
{
  std::cout << "Enter the first integer: ";
  int x;
  std::cin >> x;

  std::cout << "Enter the second integer: ";
  int y;
  std::cin >> y;
  
  char op;
  do {
  std::cout << "Enter the operator: ";
  std::cin >> op;

  switch (op)
    {
    case '+':
      return x + y;
    case '-':
      return x - y;
    case '*':
      return x * y;
    case '/':
      return x / y;
    case '%':
      return x % y;
    default:
      std::cout << "The operator is invalid.\n";
    }
  } while (true);
}

int main()
{
  std::cout << calculate() << '\n';

  return 0;
}
