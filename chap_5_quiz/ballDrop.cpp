#include <iostream>
#include "constants.h"

double getInitialHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;
    return initialHeight;
}

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen = (myConstants::gravity * seconds * seconds) / 2;
    double currentHeight  = initialHeight - distanceFallen;

    return currentHeight;
}

void printHeight(double height, int seconds)
{
    if(height > 0.0)
    {
	std::cout << "At " << seconds << " seconds, the ball is at heights: \t" << height << " meters\n";
    }
    else
	std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintHeight(double initialHeight, int seconds)
{
    double height = calculateHeight(initialHeight, seconds);
    printHeight(height, seconds);
}

int main()
{
    const double initialHeight = getInitialHeight();
    int          seconds       = 0;

    do
    {
	calculateAndPrintHeight(initialHeight, seconds);
	
	if (calculateHeight(initialHeight, seconds) <= 0)
	    break; // breaks loop once ball hits the ground
	else
	    ++seconds;
    }
    while (true); // intentional infinite loop, breaks when ball on ground
    
    return 0;
}
