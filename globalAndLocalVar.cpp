#include <iostream>
int value(5); // global variable

int main()
{
  int value = 7; // shadows the global variable values
  value++; // increments local value, not global value
  ::value--; // decrements global value, not local value

  std::cout << "global value: " << ::value << '\n'
	    << "local value: " << value << '\n';

  return 0;
} // local variable is destroyed here

/* having local variables with the same name as global variables in usually a recipe for trouble. convention uses "g_" prefix fro global variables
