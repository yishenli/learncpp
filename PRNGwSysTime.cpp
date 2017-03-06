#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    for (int count=0; count < 100; ++count)
    {
	std::cout << rand() << '\t';

	if ((count+1) % 5 == 0)
	    std::cout << '\n';
    }

    return 0;
}
