// addition asks user for two values and then adds them up
// result is then printed on screen
#include <iostream>

// prompts and get value from user
int getValFromUser()
{
  int a;
  std::cout << "Enter an integer: ";
  std::cin >> a;
  return a;
}

int main()
{
  int x = getValFromUser();
  int y = getValFromUser();

  std::cout << x << " + " << y << " = " << x + y << std::endl;

  return 0;
}
