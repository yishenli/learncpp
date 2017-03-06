#include <iostream>

int main()
{
    int selection;

    do
    {
	std::cout << "Please make a selection: \n"
		  << "1) Addition\n"
		  << "2) Subtraction\n"
		  << "3) Multiplication\n"
		  << "4) Division\n";
	std::cin >> selection;
    }
    while (selection != 1 && selection != 2 &&
	   selection != 3 && selection != 4);

    std::cout << "You have selected option #" << selection << '\n';

    return 0;
}
