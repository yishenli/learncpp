#include <iostream>

struct Advertising
{
  int    numberOfAds;
  double percentViewers;
  double averageEarningsPerClick;
};

Advertising getInput();
double      calculateTotalEarning(Advertising input);
void        printResult(double totalEarnings);

int main()
{
  // Asks for user input
  Advertising input = getInput();

  // Calculation
  double totalEarnings = calculateTotalEarning(input);

  // Print Result
  printResult(totalEarnings);

  return 0;
}

Advertising getInput()
{
  Advertising input;
  std::cout << "Enter the number of ads: ";
  std::cin >> input.numberOfAds;

  std::cout << "Enter the percentage of viewers who would click on an ad: ";
  std::cin >> input.percentViewers;

  std::cout << "Enter the per click earnings: ";
  std::cin >> input.averageEarningsPerClick;

  return input;
}
  
double      calculateTotalEarning(Advertising input)
{
  double totalEarnings = input.numberOfAds * input.percentViewers
    * input.averageEarningsPerClick;
  return totalEarnings;
}

void        printResult(double totalEarnings)
{
  std::cout << "I have made " << totalEarnings << " dollars today\n";
}
