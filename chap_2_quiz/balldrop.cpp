// This program simulates a ball being dropped off of a tower.

#include <iostream>
#include "constants.h"

int main()
{
  float fHeight;
  std::cout << "Enter the initial height of the tower in meters: ";
  std::cin >> fHeight;
  // std::cout << fHeight << std::endl;
  float fDistRemain = 0;
  int i = 0;
  while (i < 6){
      fDistRemain = fHeight - 0.5 * myConstants::gravity * (i * i);
      if (fDistRemain > 0){
	std::cout << "At " << i << " seconds, the ball is at height: " << fDistRemain << std::endl;
      } else {
	std::cout << "At " << i << " seconds, the ball in on the ground." << std::endl;
      }      
      i++;
    }
  // std::cout << i << std::endl;
}
