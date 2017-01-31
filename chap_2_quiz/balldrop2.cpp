#include <iostream>
#include "constants.h"

double getInitialHeight();
double calculateHeight(double initialHeight, int seconds);
void printHeight(double currentHeight, int seconds);
void calculateAndPrintHeight(double initialHeight, int seconds);

int main()
{
  const double initialHeight = getInitialHeight();

  int i = 0;
  while (i < 6){
    calculateAndPrintHeight(initialHeight, i);
    i ++;
  }

  return 0;
}

double getInitialHeight()
{
  std::cout << "Enter the initial height of the tower in meters: ";
  double initialHeight;
  std::cin >> initialHeight;
  return initialHeight;
}
  
double calculateHeight(double initialHeight, int seconds)
{
  // Using formula: [s = u * t + (a * t^2) / 2], with u = 0 m/s
  double distanceFallen = myConstants::gravity * seconds * seconds / 2;
  double currentDistance = initialHeight - distanceFallen;

  return currentDistance;
}

void printHeight(double currentHeight, int seconds)
{
  if (currentHeight > 0){
    std::cout << "At " << seconds << ", the ball in at height: " << currentHeight << " meters\n";
  } else {
    std::cout << "At " << seconds << ", the ball is on the ground.\n";
  }
}

void calculateAndPrintHeight(double initialHeight, int seconds)
{
  double currentHeight =  calculateHeight(initialHeight, seconds);
  printHeight(currentHeight, seconds);
}
