#include <iostream>

int getInput();
bool isEven(int input);
void printResults(bool signage);

int main()
{
  // get input
  int x = getInput();
  // isEven and printResults
  printResults(isEven(x));

  return 0;
}

int getInput()
{
  std::cout << "Enter an integer: ";
  int input;
  std::cin >> input;
  return input;
}

bool isEven(int input)
{
  return (input % 2);
}

void printResults(bool signage)
{
  if (signage){
    std::cout << "The input is an odd number.\n";
  } else {
    std::cout << "The input in an even number.\n";
  }
}
