#include <iostream>

int main()
{
    int count(0);

    while (true) // intentional infinite loop
    {
	std::cout << "Enter 'e' to exit this loops or any other key to continue : ";
	char ch;
	std::cin >> ch;

	if (ch == 'e')
	    break;

	++count;
	std::cout << "We've iterated " << count << " times\n";
    }

    return 0;
}
