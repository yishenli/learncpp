#include <iostream>

struct Fraction
{
  int numerator;
  int denominator;
};

Fraction multiply(Fraction a, Fraction b);
Fraction getInput();
void     printResults(Fraction result);

int main()
{
  // get first fraction
  Fraction a = getInput();
  
  // get second fraction
  Fraction b = getInput();

  // multiply them
  Fraction result = multiply(a, b);

  // print result
  printResults(result);

  return 0;
}

Fraction getInput()
{
  Fraction input;
  std::cout << "Enter the numerator: ";
  std::cin >> input.numerator;

  std::cout << "Enter the denominator: ";
  std::cin >> input.denominator;

  return input;
}

Fraction multiply(Fraction a, Fraction b)
{
  Fraction result{ a.numerator * b.numerator, a.denominator * b.denominator };
  return result;
}

void     printResults(Fraction result)
{
  double decimalResult = static_cast<double>(result.numerator) / result.denominator;
  std::cout << "The result is " << decimalResult << '\n';
}
