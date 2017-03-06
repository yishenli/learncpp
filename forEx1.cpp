#include <iostream>

int pow(int base, int exp)
{
    int total = 1;

    for (int count=0; count < exp; ++count)
	total *= base;

    return total;
}

int main()
{
    for (int count=0; count<10; ++count)
	std::cout << count << ' ';
    std::cout << '\n';

    std::cout << pow(5, 5) << '\n';

    for (int count=9; count >= 0; --count)
	std::cout << count << ' ';
    std::cout << '\n';

    for (int count = 9; count >= 0; count -= 2)
	std::cout << count << ' ';
    std::cout << '\n';

    for (int iii=0, jjj=9; iii < 10; ++iii, --jjj)
	std::cout << iii << ' ' << jjj << '\n';

    for (char c = 'a'; c <= 'e'; ++c)
    {
	std::cout << c;

	for (int i = 0; i < 3; ++i)
	    std::cout << i;

	std::cout << '\n';
    }
    
    return 0;
}
