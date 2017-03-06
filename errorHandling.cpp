#include <iostream>

double getDouble()
{
    while(true) // intentional infinite loop: runs until correct input received
    {
	std::cout << "Enter a double value: ";
	double x;
	std::cin >> x;
	std::cin.ignore(32767, '\n'); // truncate excess input

	if (std::cin.fail())  // reset failed or overflowed input
	{
	    std::cout << "Oops, we don't recognize that input.\n";
	    std::cin.clear();
	    std::cin.ignore(32767, '\n');
	}
	else 
	    return x;
    }
}

char getOperator()
{
    while(true) // intentional infinity loop until correct input
    {
	std::cout << "Enter one of the following: +, -, *, or /: ";
	char op;
	std::cin >> op;
	std::cin.ignore(32767, '\n'); // truncate excess input

	switch (op)  // checks for correct symbol
	{
	    case '+':
	    case '-':
	    case '*':
	    case '/':
		return op;
	    default:
		std::cout << "Oops, that input is invalid. Please try again.\n";
	}
    }
}

void printResult(double x, char op, double y)
{
    if (op == '+')
	std::cout << x << " + " << y << " is " << x + y << '\n';
    else if (op == '-')
	std::cout << x << " - " << y << " is " << x - y << '\n';
    else if (op == '*')
	std::cout << x << " * " << y << " is " << x * y << '\n';
    else if (op == '/')
	std::cout << x << " / " << y << " is " << x / y << '\n';
}

int main()
{
    double x  = getDouble();
    char   op = getOperator();
    double y  = getDouble();

    std::cout << "size(x) = " << sizeof(x) << '\n'
	      << "size(y) = " << sizeof(y) << '\n';

    printResult(x, op, y);

    return 0;
}
