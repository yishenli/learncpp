#include <iostream>

int main()
{
  const int max = 9;
  int outer = 1;
 
  while (outer <= max)
  {
    //    for (int i = 0; i < max - outer; ++i)
    //    {
    //      std::cout << "  ";
    //    }

    int inner = max;
    while (inner > 0)
    {
	if (inner > outer) {
	    std::cout << "  ";
	} else {
	    std::cout << inner << ' ';
	}
      
	--inner;
    }
	std::cout << '\n';
	++outer;
    }     
  
  return 0;
}
