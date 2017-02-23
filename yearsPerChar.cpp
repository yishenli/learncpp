#include <string>
#include <iostream>

int main()
{
  // ask for full name
  std::cout << "Enter your full name: ";
  std::string name;
  std::getline(std::cin, name);
  
  // ask for age
  std::cout << "Enter your age: ";
  int age;
  std::cin >> age;
  std::cin.ignore(255, '\n');
  
  // find out name length
  double nameLength = name.length();
  
  // maths
  double yearPerChar = age / nameLength;
  
  // print results
  std::cout << "You've lived " << yearPerChar << " years for each letter in your name.\n";

  return 0;
}
