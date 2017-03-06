#include <iostream>
#include <random> // for std::random_device and std::mt19937

int getRandomNumber(void)
{
    std::random_device rd;
    std::mt19937_64    mersenne(rd());

    int                range(100);

    return (mersenne() % range + 1);
}

int getUserInput(int count)
{
    while(true) // intentional infinite loop, breaks if input is valid
    {
	std::cout << "Guess #" << count << ": ";
	int input;
	std::cin >> input;
	std::cin.ignore(32767, '\n'); // truncates excess entries
	
	if (std::cin.fail()) // reset for failed and overflow inputs
	{
	    std::cout << "Invalid input. Try again.\n";
	    std::cin.clear();
	    std::cin.ignore(32767, '\n');
	}
	else
	    return input;
    }
}

bool checkResults(int input, int answer)
{
    if (input == answer)
    {
	std::cout << "Correct! You win!\n";
	return true;
    }
    else if (input > answer)
    {
	std::cout << "Your guess is too high.\n";
	return false;
    }
    else if (input < answer)
    {
	std::cout << "Your guess is too low.\n";
	return false;
    }
    else
    {
	std::cout << "Unknown error in checkResults()";
	return true;
    }
}

bool playAgain()
{
    while (true) // intentional, exit upon switch conditions
    {
	std::cout << "Would you like to play again (y/n)? ";
	char input;
	std::cin >> input;

	switch (input)
	{
	    case 'y':
		return true;
	    case 'n':
		std::cout << "Thank you for playing.\n";
		return false;
	}
    }
}

int main(void)
{
    do
    {
	const int maxGuesses = 7;
	// intro
	std::cout << "Let's play a game. I am thinking of a number. You have " << maxGuesses << " tries to guess what it is.\n";
	
	// get random number
	int answer = getRandomNumber();
	std::cout << "The answer is: " << answer << '\n';
    
	// loops a few times (set by maxGuesses)
	for (int count=1; count<=maxGuesses; ++count)
	{
	    int input = getUserInput(count);

	    // checks whether the guess is correct and prints out response
	    bool isCorrect = checkResults(input, answer);
	    
	    // If the guess was correct, loop is exited
	    if (isCorrect)
		break;

	    // gg when count hits max number
	    if (count == maxGuesses)
		std::cout << "Sorry, you lose. The correct number is " << answer << ".\n";
	}
    }
    while (playAgain());
    
    return 0;
}
