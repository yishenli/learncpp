#include <iostream>
#include <cstdlib>

int main()
{
    srand(5323);

    for (int count=0; count < 100; ++count)
    {
	std::cout << rand() << '\t';

	if ((count+1) % 5 == 0)
	    std::cout << '\n';
    }

    return 0;
}
