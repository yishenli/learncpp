#include <iostream>
#include <random>

int main()
{
    std::random_device rd;  // use a hardware entropy source if available, otherwise use PRNG
    std::mt19937 mersenne(rd());  // initialize our mersenne twister with a random seed

    for (int count = 0; count < 48; ++count)
    {
	std::cout << mersenne() << '\t';

	if ((count + 1) % 4 == 0)
	    std::cout << '\n';
    }

    return 0;
}
