#include <iostream>

int main()
{
  const int asciiA = 97;
  int count = 0;

  while (count < 26)
    {
      std::cout << static_cast<char>(count + asciiA) << ' '
		<< (count + asciiA) << '\n';
      ++count;
    }

  return 0;
}
