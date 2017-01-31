#include <iostream>

int getDouble();
char getOperator();
void printResult(double x, char op, double y);

int main()
{
  double x = getDouble();
  double y = getDouble();
  char op = getOperator();

  printResult(x, op, y);

  return 0;
}

int getDouble()
{
  std::cout << "Enter a double value: ";
  double x;
  std::cin >> x;
  return x;
}

char getOperator()
{
  std::cout << "Enter an operator: ";
  char op;
  std::cin >> op;
  return op;
}

void printResult(double x, char op, double y)
{
  if (op == '+'){
    std::cout << x << " + " << y << " = " << x + y << '\n';
  } else if (op == '-'){
    std::cout << x << " - " << y << " = " << x - y << '\n';
  } else if (op == '*'){
    std::cout << x << " * " << y << " = " << x * y << '\n';
  } else if (op == '/'){
    std::cout << x << " / " << y << " = " << x / y << '\n';
  }
}
