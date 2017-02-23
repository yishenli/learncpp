#include <iostream>
#include <string>

enum class MonsterType
{
  OGRE,
  DRAGON,
  ORC,
  GIANTSPIDER,
  SLIME
};

struct Monster
{
  std::string name;
  MonsterType type;
  int health;
};

void printMonster(Monster monster)
{
  using std::cout;
  cout << "This ";
  switch (monster.type)
    {
      case MonsterType::OGRE:
	cout << "ogre ";
	break;
      case MonsterType::DRAGON:
	cout << "dragon ";
	break; 
     case MonsterType::ORC:
	cout << "orc ";
	break;
      case MonsterType::GIANTSPIDER:
	cout << "giant spider ";
	break;
      case MonsterType::SLIME:
	cout << "slime ";
	break;
      default:
	cout << "Unknown ";
	break;
    }
  cout << "is named " << monster.name << " and has " << monster.health << " health.";
}

int main()
{
  // instantiate the monsters
  Monster Torg =  { "Torg", MonsterType::OGRE, 145 };
  Monster Blurp = { "Blurp", MonsterType::SLIME, 23 };

  printMonster(Torg);
  std::cout << '\n';
  printMonster(Blurp);
  std::cout << '\n';
  
  return 0;
}
