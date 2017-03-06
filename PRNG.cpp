#include <iostream>

unsigned int PRNG()
{
    static unsigned int seed = 5323;

    seed = (8253729 * seed + 2396403);

    return seed % 32768;
}

int main()
{
    for (int count=0; count < 100; ++count)
    {
	std::cout << PRNG() << '\t';

	if ((count+1)%5 == 0)
	    std::cout << '\n';
    }

    return 0;
}
