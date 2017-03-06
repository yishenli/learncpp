#include <iostream>

int sumTo(int x)
{
    int total = 0;
    
    for (int i=1; i<=x; ++i)
	total += i;
    return total;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    std::cout << "The sum to " << x << " is " << sumTo(x) << '\n';

    return 0;
}
