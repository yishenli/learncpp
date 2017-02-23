#include <iostream>

int main()
{
  enum Color
  {
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_WHITE,
    COLOR_CYAN,
    COLOR_YELLOW,
    COLOR_MAGENTA,
  };

  Color paint(COLOR_WHITE);

  std::cout << paint;

  return 0;
}

/*
enum Monsters
{
  MONSTER_ORCS,
  MONSTER_GOBLINS,
  MONSTER_TROLLS,
  MONSTER_OGRES,
  MONSTER_SKELETONS,
};

Monsters encounterOne(MONSTER_TROLLS);

a T
b T
c F
d F   Actually true
e T
f F  Actually true
*/


/*
using error_t = int;
or
typedef int error_t;
error_t printData();
*/
