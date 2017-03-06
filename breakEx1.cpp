#include <iostream>

int main()
{
    int count(0);
    bool exitLoop(false);

    while (!exitLoop)
    {
	std::cout << "Enter 'e' to exit this loops or any other key to continue: ";
	char ch;
	std::cin >> ch;

	if (ch == 'e')
	    exitLoop = true;
	else
	{
	    ++count;
	    std::cout << "We've iterated " << count << " times\n";
	}
    }

    return 0;
}
