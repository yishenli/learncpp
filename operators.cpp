// examples of sizeof, comma and conditional operators

#include <iostream>

int main()
{
  double d = 5.0;
  std::cout << "The size of double is " << sizeof(d) << " bytes." << std::endl;

  int x = 0;
  int y = 2;
  int z = (++x, ++y); // z would be assigned the result of evaluating ++y
  // however, comma in function calls are not the operator

  /* the conditional operator ?: is so far the only ternary operator in C++
     it is a shorthand method for the follwoing if/else statement:

     if (condition)
       expression;
     else
       other_expression;
     
     which can be rewritten as:

     (condition) ? expression : other_expression;
  */
  int larger = (x > y) ? x : y;
  std::cout << "The larger of " << x << " and " << y << " is " << larger << std::endl;

  // sometimes the conditional operator can be applied in more situations
  bool inBigClassroom = false;
  // assignment is one place it can be used
  // '=' and '?:' are both level 15 operators, so it will evaluate from R->L
  const int classSize = inBigClassroom ? 30 : 20;
  std::cout << "We are not in the big classroom, so the class size is " << classSize << std::endl;
}
