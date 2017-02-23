#include <iostream>

int main()
{
  // prompts for inputs 'a' & 'b'
  std::cout << "Enter an integer: ";
  int a;
  std::cin >> a;
  std::cout << "Enter a larger integer: ";
  int b;
  std::cin >> b;

  // check values, if 'a' larger, swaps variables
  if (a > b) {
    int c = a;
    a = b;
    b = c;
    std::cout << "Swapping the values\n";
  }
  int superdoperlongwhatevervariablename;
  
  // print out the results
  std::cout << "The smaller value is " << a << '\n'
	    << "The larger values is " << b << '\n';
  
  return 0;
}
