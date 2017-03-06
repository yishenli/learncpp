#include <iostream>
#include <string>

enum class Animal
{
  PIG,
  CHICKEN,
  GOAT,
  CAT,
  DOG,
  OSTRICH
};

std::string getAnimalName(Animal animal)
{
  switch (animal)
  {
    case Animal::PIG:
      return "pig";
    case Animal::CHICKEN:
      return "chicken";
    case Animal::GOAT:
      return "goat";
    case Animal::CAT:
      return "cat";
    case Animal::DOG:
      return "dog";
    case Animal::OSTRICH:
      return "ostrich";  
    default:
      return "none existant";
  }
}

void printNumberOfLegs(Animal animal)
{
  std::cout << "A " << getAnimalName(animal) << " has ";

  switch (animal)
  {
    case Animal::PIG:
      std::cout << "4 legs.\n";
      break;
    case Animal::CHICKEN:
      std::cout << "2 legs.\n";
      break;
    case Animal::GOAT:
      std::cout << "4 legs.\n";
      break;
    case Animal::CAT:
      std::cout << "4 legs.\n";
      break;
    case Animal::DOG:
      std::cout << "4 legs.\n";
      break;
    case Animal::OSTRICH:
      std::cout << "2 legs.\n";
      break;
    default:
      std::cout << "none existing number of legs.\n";
      break;
  }
}

int main()
{
  // call printNumberOfLegs()
  printNumberOfLegs(Animal::CAT);
  printNumberOfLegs(Animal::CHICKEN);

  return 0;
}
